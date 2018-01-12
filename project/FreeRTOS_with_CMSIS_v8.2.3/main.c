/* -------------------------------------------------------------------------- 
 * Copyright (c) 2013-2017 ARM Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *      Name:    Blinky.c
 *      Purpose: RTOS2 example program
 *
 *---------------------------------------------------------------------------*/

#include <stdio.h>

#include "cmsis_os2.h"

#define QUEUE_NUM 1

osThreadId_t tid_phaseA;                /* Thread id of thread: phase_a      */
osThreadId_t tid_phaseB;                /* Thread id of thread: phase_b      */
osThreadId_t tid_phaseC;                /* Thread id of thread: phase_c      */
osThreadId_t tid_phaseD;                /* Thread id of thread: phase_d      */
osThreadId_t tid_clock;                 /* Thread id of thread: clock        */
osThreadId_t tid_phaseQ;                /* Thread id of thread: phase_q      */

osMessageQueueId_t qid_phase[QUEUE_NUM];			/* Queue is of Threads */

struct phases_t {
  int_fast8_t phaseA;
  int_fast8_t phaseB;
  int_fast8_t phaseC;
  int_fast8_t phaseD;
} g_phases;

struct qmsg{
	uint32_t size;	
	unsigned char data[32];
};

struct qmsg amsg= {
	.size = 10,
	.data = "Wake up A"
};
struct qmsg bmsg = {
	.size = 10,
	.data = "Wake up B"
};
struct qmsg cmsg = {
	.size = 10,
	.data = "Wake up C"
};
struct qmsg dmsg = {
	.size = 10,
	.data = "Wake up D"
};
/*----------------------------------------------------------------------------
 *      Function 'signal_func' called from multiple threads
 *---------------------------------------------------------------------------*/
void signal_func (osThreadId_t tid)  {
  osThreadFlagsSet(tid_clock, 0x0100);      /* set signal to clock thread    */
  osDelay(500);                             /* delay 500ms                   */
  osThreadFlagsSet(tid_clock, 0x0100);      /* set signal to clock thread    */
  osDelay(500);                             /* delay 500ms                   */
  osThreadFlagsSet(tid, 0x0001);            /* set signal to thread 'thread' */
  osDelay(500);                             /* delay 500ms                   */
}

/*----------------------------------------------------------------------------
 *      Thread 1 'phaseA': Phase A output
 *---------------------------------------------------------------------------*/
void phaseA (void *argument) {
	uint32_t temp = (uint32_t)&amsg;
  for (;;) {
    osThreadFlagsWait(0x0001, osFlagsWaitAny ,osWaitForever);   /* wait for an event flag 0x0001 */
	osMessageQueuePut(qid_phase[0],&temp,0,0);
    g_phases.phaseA = 1;
    signal_func(tid_phaseB);                                    /* call common signal function   */
    g_phases.phaseA = 0;
  }
}

/*----------------------------------------------------------------------------
 *      Thread 2 'phaseB': Phase B output
 *---------------------------------------------------------------------------*/
void phaseB (void *argument) {
	uint32_t temp = (uint32_t)&bmsg;
  for (;;) {
    osThreadFlagsWait(0x0001, osFlagsWaitAny, osWaitForever);   /* wait for an event flag 0x0001 */
	osMessageQueuePut(qid_phase[0],&temp,0,0);
    g_phases.phaseB = 1;
    signal_func(tid_phaseC);                                    /* call common signal function   */
    g_phases.phaseB = 0;
  }
}

/*----------------------------------------------------------------------------
 *      Thread 3 'phaseC': Phase C output
 *---------------------------------------------------------------------------*/
void phaseC (void *argument) {
	uint32_t temp = (uint32_t)&cmsg;
  for (;;) {
    osThreadFlagsWait(0x0001, osFlagsWaitAny, osWaitForever);   /* wait for an event flag 0x0001 */
	osMessageQueuePut(qid_phase[0],&temp,0,0);
    g_phases.phaseC = 1;
    signal_func(tid_phaseD);                                    /* call common signal function   */
    g_phases.phaseC = 0;
  }
}

/*----------------------------------------------------------------------------
 *      Thread 4 'phaseD': Phase D output
 *---------------------------------------------------------------------------*/
void phaseD (void *argument) {
	uint32_t temp = (uint32_t)&dmsg;
  for (;;) {
    osThreadFlagsWait(0x0001, osFlagsWaitAny, osWaitForever);   /* wait for an event flag 0x0001 */
	osMessageQueuePut(qid_phase[0],&temp,0,0);
    g_phases.phaseD = 1;
    signal_func(tid_phaseA);                                    /* call common signal function   */
    g_phases.phaseD = 0;
  }
}

/*----------------------------------------------------------------------------
 *      Thread 5 'clock': Signal Clock
 *---------------------------------------------------------------------------*/
void clock (void *argument) {
  for (;;) {
	printf("CLOCK\n");
    osThreadFlagsWait(0x0100, osFlagsWaitAny, osWaitForever);   /* wait for an event flag 0x0100 */
    osDelay(80);                                                /* delay  80ms                   */
  }
}

/*----------------------------------------------------------------------------
 *      Thread 5 'Q': Queue
 *---------------------------------------------------------------------------*/

void phaseQ (void* unuse){
	struct qmsg *msg;
	uint32_t temp = 0;
	for(;;){
		osMessageQueueGet(qid_phase[0], &temp, NULL, osWaitForever);
		msg = temp;
		write(1,msg->data,msg->size);
		write(1,"\n",1);
	}
}

/*----------------------------------------------------------------------------
 *      Main: Initialize and start the application
 *---------------------------------------------------------------------------*/
void app_main (void *argument) {

  tid_phaseA = osThreadNew(phaseA, NULL, NULL);
  tid_phaseB = osThreadNew(phaseB, NULL, NULL);
  tid_phaseC = osThreadNew(phaseC, NULL, NULL);
  tid_phaseD = osThreadNew(phaseD, NULL, NULL);
  tid_clock  = osThreadNew(clock,  NULL, NULL);

  osThreadFlagsSet(tid_phaseA, 0x0001); /* set signal to phaseA thread   */

  osThreadAttr_t att={0};
  att.name = "Queue";
  att.priority = osPriorityAboveNormal;
  tid_phaseQ = osThreadNew(phaseQ, NULL, &att);

  osDelay(osWaitForever);
  while(1);
}

/*----------------------------------------------------------------------------
 *      Main: Initialize and start the RTOS2 Kernel
 *---------------------------------------------------------------------------*/
int main (void) {

  // System Initialization
#ifdef SYSTICKS
  SystemCoreClockUpdate();
#endif

#ifdef RTE_Compiler_EventRecorder
  // Initialize and start Event Recorder
  EventRecorderInitialize(EventRecordAll, 1U);
#endif

  for(int i=0;i<QUEUE_NUM;i++){
		 qid_phase[i] = osMessageQueueNew(8,sizeof(void *),NULL);
  }

  osKernelInitialize();                 // Initialize CMSIS-RTOS
  osThreadNew(app_main, NULL, NULL);    // Create application main thread
  if (osKernelGetState() == osKernelReady) {
    osKernelStart();                    // Start thread execution
  }

  while(1);
}
