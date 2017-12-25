#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([Freertos-Posix_simulator-CMSIS], [0.1], [anthony_cheng@gmail.com])
# AC_CONFIG_SRCDIR([FreeRTOS_KERNEL/FreeRTOS_v5.4.2/main.c])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_MAKE_SET
AC_PROG_RANLIB
AC_PROG_CPP

# Checks for libraries.
AC_CHECK_LIB([pthread], [pthread_create])
# FIXME: Replace `main' with a function in `-lbcc':
# AC_CHECK_LIB([bcc], [main])
# FIXME: Replace `main' with a function in `-lc':
# AC_CHECK_LIB([c], [main])
# FIXME: Replace `main' with a function in `-lm':
# AC_CHECK_LIB([m], [main])
# FIXME: Replace `main' with a function in `-lrt':
# AC_CHECK_LIB([rt], [main])

# Checks for header files.
AC_CHECK_HEADERS([arpa/inet.h fcntl.h inttypes.h limits.h malloc.h netinet/in.h stddef.h stdint.h stdlib.h string.h sys/ioctl.h sys/param.h sys/socket.h sys/time.h termios.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_INT8_T
AC_TYPE_OFF_T
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T
AC_CHECK_MEMBERS([struct stat.st_blksize])
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T
AC_CHECK_TYPES([ptrdiff_t])

# Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([bzero gethostbyname inet_ntoa isascii memmove memset pow select socket strcasecmp strchr strncasecmp strpbrk strrchr strstr strtol strtoul])

AC_CONFIG_FILES([FreeRTOS_KERNEL/FreeRTOS_v5.4.2/Debug/makefile
                 FreeRTOS_KERNEL/FreeRTOS_v5.4.2/Release/makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/ARM7_AT91FR40008_GCC/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/ARM7_LPC2106_GCC/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/ARM7_LPC2368_Eclipse/RTOSDemo/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/AVR32_UC3/AT32UC3A/GCC/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/AVR32_UC3/AT32UC3B/GCC/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/AVR_ATMega323_WinAVR/makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/axipmon_v6_4/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/canps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/coresightps_dcc_v1_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/cpu_cortexa53_v1_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/csudma_v1_0/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/emacps_v3_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/gpiops_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/iicps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/ipipsu_v2_0/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/qspipsu_v1_0/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/rtcpsu_v1_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/scugic_v3_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/sdps_v2_7/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/standalone_v5_4/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/sysmonpsu_v1_0/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/ttcps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/uartps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/wdtps_v3_0/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A53_64-bit_UltraScale_MPSoC/RTOSDemo_A53_bsp/psu_cortexa53_0/libsrc/zdma_v1_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/canps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/coresightps_dcc_v1_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/cpu_cortexa9_v2_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/ddrps_v1_0/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/devcfg_v3_4/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/dmaps_v2_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/emacps_v3_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/gpiops_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/iicps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/qspips_v3_3/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/scugic_v3_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/scutimer_v2_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/scuwdt_v2_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/sdps_v2_7/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/standalone_v5_4/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/standalone_v5_4/src/profile/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/ttcps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/uartps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/usbps_v2_3/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_A9_Zynq_ZC702/RTOSDemo_bsp/ps7_cortexa9_0/libsrc/xadcps_v2_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_ATSAM3S-EK2_Atmel_Studio/src/asf/sam/utils/make/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_ATSAM3X_Atmel_Studio/src/asf/sam/utils/make/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_LM3S102_GCC/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_LM3S811_GCC/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_M4_ATSAM4L_Atmel_Studio/src/asf/sam/utils/make/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_M4_ATSAM4S_Atmel_Studio/src/asf/sam/utils/make/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/axipmon_v6_4/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/canps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/coresightps_dcc_v1_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/cpu_cortexr5_v1_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/csudma_v1_0/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/emacps_v3_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/gpiops_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/iicps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/ipipsu_v2_0/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/qspipsu_v1_0/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/rtcpsu_v1_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/scugic_v3_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/sdps_v2_7/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/standalone_v5_4/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/sysmonpsu_v1_0/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/ttcps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/uartps_v3_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/wdtps_v3_0/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/CORTEX_R5_UltraScale_MPSoC/RTOSDemo_R5_bsp/psu_cortexr5_0/libsrc/zdma_v1_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/ColdFire_MCF52233_Eclipse/RTOSDemo/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/Cygnal/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/HCS12_GCC_banked/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/MCF5235_GCC/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/MicroBlaze_Kintex7_EthernetLite/BSP/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/MicroBlaze_Kintex7_EthernetLite/BSP/microblaze_0/libsrc/bram_v4_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/MicroBlaze_Kintex7_EthernetLite/BSP/microblaze_0/libsrc/cpu_v2_4/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/MicroBlaze_Kintex7_EthernetLite/BSP/microblaze_0/libsrc/emaclite_v4_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/MicroBlaze_Kintex7_EthernetLite/BSP/microblaze_0/libsrc/gpio_v4_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/MicroBlaze_Kintex7_EthernetLite/BSP/microblaze_0/libsrc/intc_v3_5/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/MicroBlaze_Kintex7_EthernetLite/BSP/microblaze_0/libsrc/standalone_v5_4/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/MicroBlaze_Kintex7_EthernetLite/BSP/microblaze_0/libsrc/standalone_v5_4/src/profile/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/MicroBlaze_Kintex7_EthernetLite/BSP/microblaze_0/libsrc/tmrctr_v4_1/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/MicroBlaze_Kintex7_EthernetLite/BSP/microblaze_0/libsrc/uartlite_v3_2/src/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/PIC24_MPLAB/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/PIC32MEC14xx_MPLAB/PIC32MEC14xx_RTOSDemo.X/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/PIC32MX_MPLAB/RTOSDemo.X/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/PIC32MZ_MPLAB/RTOSDemo.X/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/WizNET_DEMO_GCC_ARM7/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/lwIP_AVR32_UC3/AT32UC3A/GCC/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/lwIP_Demo_Rowley_ARM7/makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/lwIP_MCF5235_GCC/Makefile
                 cmsis_interface/CMSIS-FreeRTOS/Demo/msp430_GCC/makefile])
AC_OUTPUT
