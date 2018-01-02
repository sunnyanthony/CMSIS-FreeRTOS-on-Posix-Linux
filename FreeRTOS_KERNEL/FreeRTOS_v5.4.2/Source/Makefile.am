

libkernel_a_CPPFLAGS = \
					   -I$(top_srcdir)/FreeRTOS_KERNEL/FreeRTOS_v5.4.2/Source/include \
					   -I$(top_srcdir)/FreeRTOS_KERNEL/FreeRTOS_v5.4.2 \
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

