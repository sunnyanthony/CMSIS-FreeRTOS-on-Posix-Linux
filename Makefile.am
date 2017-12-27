
# ------------------------------------------- #
AM_CPPFLAGS = 
target_SOURCE =
target_LDADD =
target_LDFLAGS =
noinst_PROGRAMS = target
BUILT_SOURCES = $(PROJECT)/main.c #Freertos_KERNEL/Freertos_vx.x.x

# ------------------------------------------- #
SUBDIRS = \
		  posix_simulator \
		  Freerots_KERNEL

# ACLOCAL_AMFLAGS = -I m4


# ------------------------------------------- #
noinst_HEADERS =

AM_CPPFLAGS += \
			   -I$(top_srcdir)/posix_simulator/AsyncIO \
			   -I$(KERNEL_PATH)/Common_Demo/include/ \
			   -I$(top_srcdir)/posix_simulator/portable/GCC/Posix \
			   -I$(KERNEL_PATH)/FreeRTOS_Kernel/include

if FREERTOS_CMSIS
AM_CPPFLAGS += \
			   -I$(top_srcdir)/cmsis_interface/CMSIS-FreeRTOS/CMSIS/RTOS2/FreeRTOS/Include1
endif

freertos_kernel_libs =
platform_libs =
application_libs =


freertos_kernel_libs += $(top_srcdir)/Freertos_KERNEL/$(KERNEL)/kernel.o
platform_libs += $(top_srcdir)/posix_simulator/portable.a $(top_srcdir)/posix_simulator/posix.a
if POSIX_DEMO
application_libs += $(top_srcdir)/FreeRTOS_KERNEL/FreeRTOS_v5.4.2/Common_Demo/demo.a 
else
application_libs += $(top_srcdir)/$(APP_DIR)/app.a 
endif
target_LDADD += $(freertos_kernel) $(platform_libs) $(application_libs)
