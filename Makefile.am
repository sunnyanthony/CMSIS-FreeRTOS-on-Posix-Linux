
# ------------------------------------------- #
AM_CPPFLAGS = 
target_SOURCE =
target_LDADD =
target_LDFLAGS =
noinst_PROGRAMS = target
BUILT_SOURCES = project/$(PROJECT_DIR)/main.c #Freertos_KERNEL/Freertos_vx.x.x

# ------------------------------------------- #
SUBDIRS = \
		  posix_simulator \
		  Freerots_KERNEL \
		  project

# ACLOCAL_AMFLAGS = -I m4


# ------------------------------------------- #
noinst_HEADERS =

AM_CPPFLAGS += \
			   -I$(top_srcdir)/posix_simulator/AsyncIO \
			   -I$(KERNEL_DIR)/Common_Demo/include/ \
			   -I$(top_srcdir)/posix_simulator/portable/GCC/Posix \
			   -I$(KERNEL_DIR)/FreeRTOS_Kernel/include

if FREERTOS_CMSIS
AM_CPPFLAGS += \
			   -I$(top_srcdir)/cmsis_interface/CMSIS-FreeRTOS/CMSIS/RTOS2/FreeRTOS/Include1
endif

# -------------------------------------------- #
freertos_kernel_libs =
platform_libs =
application_libs =
freertos_os_libs =
cmsis_interface =

if FREERTOS_CMSIS
freertos_os_libs += $(cmsis_interface)
endif

freertos_kernel_libs += $(top_srcdir)/Freertos_KERNEL/$(KERNEL_DIR)/kernel.a

freertos_os_libs += $(freertos_kernel_libs)

platform_libs += $(top_srcdir)/posix_simulator/portable.a $(top_srcdir)/posix_simulator/posix.a

application_libs += $(top_srcdir)/project/$(PROJECT_DIR)/app.a 

target_LDADD += $(freertos_os_libs) $(platform_libs) $(application_libs)
