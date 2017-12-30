# Automake variables

SUBDIRS =
DIST_SUBDIRS =

noinst_HEADERS = 
# $(top_srcdir)/FreeRTOS_KERNEL/$(KERNEL_DIR)/FreeRTOS_Kernel/FreeRTOSConfig.h
# include $(top_srcdir)/include/Makefile.am

AM_CPPFLAGS = \
    			-I$(top_srcdir)/project/$(PROJECT_DIR)/$(DEMO_DIR)/include \
				-I$(top_srcdir)/FreeRTOS_KERNEL/$(KERNEL_DIR)/FreeRTOS_Kernel/include \
				-I$(top_srcdir)/FreeRTOS_KERNEL/$(KERNEL_DIR)/ \
				-I$(srcdir)/portable/GCC/Posix/

noinst_LTLIBRARIES =


include $(srcdir)/portable/Makefile.am

include $(srcdir)/AsyncIO/Makefile.am

include $(srcdir)/FIleIO/Makefile.am
