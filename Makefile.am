
# ------------------------------------------- #
AM_CPPFLAGS = 
target_SOURCES =
target_LDADD =
target_LDFLAGS =
noinst_PROGRAMS = target
BUILT_SOURCES = project/main.c

# ------------------------------------------- #
SUBDIRS = \
		  FreeRTOS_KERNEL \
		  project \
		  posix_simulator

ACLOCAL_AMFLAGS = -I m4


# ------------------------------------------- #
noinst_HEADERS =

AM_CPPFLAGS += \
			   -I$(top_srcdir)/posix_simulator/ \
			   -I$(top_srcdir)/posix_simulator/FileIO \
			   -Iproject/$(PROJECT_DIR)/Common_Demo/include/ \
			   -I$(top_srcdir)/posix_simulator/portable/GCC/Posix \
			   -IFreeRTOS_KERNEL/$(KERNEL_DIR)/FreeRTOS_Kernel/include \
			   -IFreeRTOS_KERNEL/$(KERNEL_DIR)/

if FREERTOS_CMSIS
AM_CPPFLAGS += \
			   -I$(top_srcdir)/cmsis_interface/CMSIS-FreeRTOS/CMSIS/RTOS2/FreeRTOS/Include1
endif

target_SOURCES += project/main.c

# -------------------------------------------- #
freertos_kernel_libs =
platform_libs =
application_libs =
freertos_os_libs =
cmsis_interface =

if FREERTOS_CMSIS
freertos_os_libs += $(cmsis_interface)
endif

freertos_kernel_libs += $(top_srcdir)/Freertos_KERNEL/libkernel.a

freertos_os_libs += $(freertos_kernel_libs)

platform_libs += $(top_srcdir)/posix_simulator/libport_lib.la
platform_libs += $(top_srcdir)/posix_simulator/libfileio_lib.la
platform_libs += $(top_srcdir)/posix_simulator/libasynio_lib.la

application_libs += $(top_srcdir)/project/libapp.a

target_LDADD += $(freertos_os_libs) $(platform_libs) $(application_libs)
