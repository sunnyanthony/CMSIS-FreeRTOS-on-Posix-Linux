
SUBDIRS =
DIST_SUBDIRS =
noinst_LIBRARIES =


AM_CPPFLAGS = \
			 -I$(top_srcdir)/FreeRTOS_KERNEL/$(KERNEL_DIR) \
			 -I$(top_srcdir)/FreeRTOS_KERNEL/$(KERNEL_DIR)/Source/include \
			 -I$(top_srcdir)/posix_simulator/portable/GCC/Posix

include $(srcdir)/FreeRTOS_without_CMSIS_v5.4.2/Makefile.am

include $(srcdir)/FreeRTOS_without_CMSIS_v8.2.3/Makefile.am
