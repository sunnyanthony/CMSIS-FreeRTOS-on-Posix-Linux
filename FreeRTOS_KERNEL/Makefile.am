

SUBDIRS =
DIST_SUBDIRS =

noinst_HEADERS =
noinst_LIBRARIES =
AM_CPPFLAGS =

if FREERTOS_CMSIS
AM_CPPFLAGS += -D__CMSIS_RTOS
endif

# include $(top_srcdir)/FreeRTOS_KERNEL/$(KERNEL_DIR)/FreeRTOS_Kernel/include/Makefile.am

# include $(top_srcdir)/FreeRTOS_KERNEL/$(KERNEL_DIR)/FreeRTOS_Kernel/Makefile.am

include $(srcdir)/FreeRTOS_v5.4.2/Makefile.am

include $(srcdir)/FreeRTOS_v8.2.3/Makefile.am
