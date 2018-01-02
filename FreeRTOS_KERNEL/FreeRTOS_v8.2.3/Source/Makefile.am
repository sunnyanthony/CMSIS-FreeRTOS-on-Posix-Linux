if KERNEL_V8_2_3

libkernel_a_CPPFLAGS = \
					   -I$(top_srcdir)/FreeRTOS_KERNEL/FreeRTOS_v8.2.3/Source/include \
					   -I$(top_srcdir)/FreeRTOS_KERNEL/FreeRTOS_v8.2.3 \
					   -I$(top_srcdir)/posix_simulator/portable/GCC/Posix \
					   $(AM_CPPFLAGS)

noinst_LIBRARIES += libkernel.a
libkernel_a_SOURCES =

# include %reldir%/include
libkernel_a_SOURCES += \
					  %reldir%/croutine.c \
					  %reldir%/include/croutine.h \
					  %reldir%/include/mpu_wrappers.h \
					  %reldir%/include/projdefs.h \
					  %reldir%/include/semphr.h \
					  %reldir%/include/StackMacros.h \
					  %reldir%/list.c \
					  %reldir%/include/list.h \
					  %reldir%/include/portable.h \
					  %reldir%/queue.c \
					  %reldir%/include/queue.h \
					  %reldir%/tasks.c \
					  %reldir%/include/task.h \
					  %reldir%/include/FreeRTOS.h


libkernel_a_SOURCES += \
					   %reldir%/event_groups.c \
					   %reldir%/include/event_groups.h \
					   %reldir%/timers.c \
					   %reldir%/include/timers.h \
					   %reldir%/include/deprecated_definitions.h
endif

