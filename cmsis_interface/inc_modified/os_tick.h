/**************************************************************************//**
 * @file     os_tick.h
 * @brief    CMSIS OS Tick SysTick implementation
 * @version  V1.0.1
 * @date     29. November 2017
 ******************************************************************************/
/*
 * Copyright (c) 2017-2017 ARM Limited. All rights reserved.
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
 */

#ifdef  SysTick
#undef  SysTick
#endif

#ifdef SysTick
static uint8_t PendST;

// Setup OS Tick.
__WEAK int32_t OS_Tick_Setup (uint32_t freq, IRQHandler_t handler);

/// Enable OS Tick.
__WEAK void OS_Tick_Enable (void);

/// Disable OS Tick.
__WEAK void OS_Tick_Disable (void);

// Acknowledge OS Tick IRQ.
__WEAK void OS_Tick_AcknowledgeIRQ (void);

// Get OS Tick IRQ number.
__WEAK int32_t  OS_Tick_GetIRQn (void);

// Get OS Tick clock.
__WEAK uint32_t OS_Tick_GetClock (void);

// Get OS Tick interval.
__WEAK uint32_t OS_Tick_GetInterval (void);
}

// Get OS Tick count value.
__WEAK uint32_t OS_Tick_GetCount (void);

// Get OS Tick overflow status.
__WEAK uint32_t OS_Tick_GetOverflow (void);

#else
#include "FreeRTOSConfig.h"
inline static uint32_t OS_Tick_GetCount(void) {
	return 0U;
}
inline static uint32_t OS_Tick_GetOverflow(void) {
	return 0U;
}
inline static uint32_t OS_Tick_GetInterval(void) {
	return (configCPU_CLOCK_HZ)/(configTICK_RATE_HZ);
}
#endif
