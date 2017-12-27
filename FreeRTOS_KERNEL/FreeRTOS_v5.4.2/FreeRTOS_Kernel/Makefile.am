

AC_CPPFLAGS =
if ARM_FREERTOS_CMSIS
AC_CPPFLAGS += -D__CMSIS_RTOS
endif

noinst_LIBRARIES = libkernel.a
libkernel_a_SOURCE =

# include %reldir%/include
libkernel_a_SOURCE += \
					  include/FreeRTOS.h \
					  croutine.c \
					  include/croutine.h \
					  include/mpu_wrappers.h \
					  include/projdefs.h \
					  include/semphr.h \
					  include/StackMacros.h \
					  list.c \
					  include/list.h \
					  include/portable.h \
					  queue.c \
					  include/queue.h \
					  task.c \
					  include/task.h

