
# ------------------------------------------- #
AM_CPPFLAGS = 
target_SOURCE =
target_LDADD =
target_LDFLAGS =
noinst_PROGRAMS = target
BUILT_SOURCES = project/$(PROJECT_DIR)/main.c #Freertos_KERNEL/Freertos_vx.x.x

# ------------------------------------------- #
SUBDIRS = \
		  FreeRTOS_KERNEL \
		  posix_simulator \
		  project

ACLOCAL_AMFLAGS = -I m4


# ------------------------------------------- #
noinst_HEADERS =

AM_CPPFLAGS += \
			   -I$(top_srcdir)/posix_simulator/AsyncIO \
			   -Iproject/$(PROJECT_DIR)/Common_Demo/include/ \
			   -I$(top_srcdir)/posix_simulator/portable/GCC/Posix \
			   -IFreeRTOS_KERNEL/$(KERNEL_DIR)/FreeRTOS_Kernel/include

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

freertos_kernel_libs += $(top_srcdir)/Freertos_KERNEL/$(KERNEL_DIR)/libkernel.a

freertos_os_libs += $(freertos_kernel_libs)

platform_libs += $(top_srcdir)/posix_simulator/libport_lib.a
platform_libs += $(top_srcdir)/posix_simulator/libfileio_lib.a
platform_libs += $(top_srcdir)/posix_simulator/libasynio_lib.a

application_libs += $(top_srcdir)/project/$(PROJECT_DIR)/libapp.a 

target_LDADD += $(freertos_os_libs) $(platform_libs) $(application_libs)
