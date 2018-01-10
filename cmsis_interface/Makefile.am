

SUBDIRS =
DIST_SUBDIRS =

noinst_HEADERS =
noinst_LIBRARIES = libcmsis.a
AM_CPPFLAGS =

# os_tick is a dummy timer, only use ticks
# cmsis_compiler has fake ipsr to cheat cmsis
noinst_HEADERS += %reldir%/inc_modified/os_tick.h \
				  %reldir%/inc_modified/cmsis_compiler.h

libcmsis_a_CPPFLAGS = \
					  -I$(top_srcdir)/cmsis_interface/CMSIS-FreeRTOS/CMSIS/RTOS2/FreeRTOS/Include1 \
					  -I$(top_srcdir)/cmsis_interface/src_modified \
					  -I$(top_srcdir)/cmsis_interface/inc_modified \
					  -I$(top_srcdir)/project/$(PROJECT_DIR)/_Simulation \
					  -I$(top_srcdir)/FreeRTOS_KERNEL/$(KERNEL_DIR)/Source/include \
					  -I$(top_srcdir)/FreeRTOS_KERNEL/$(KERNEL_DIR) \
					  -I$(top_srcdir)/posix_simulator/portable/GCC/Posix/ \
					  $(AM_CPPFLAGS)

libcmsis_a_SOURCES = \
					 %reldir%/CMSIS-FreeRTOS/CMSIS/RTOS2/FreeRTOS/Include1/cmsis_os.h \
					 %reldir%/src_modified/cmsis_os2.h


libcmsis_a_SOURCES += \
					 %reldir%/CMSIS-FreeRTOS/CMSIS/RTOS2/FreeRTOS/Source/cmsis_os1.c \
					 %reldir%/src_modified/cmsis_os2.c

