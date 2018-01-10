
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
		  cmsis_interface \
		  project \
		  posix_simulator

ACLOCAL_AMFLAGS = -I m4


# ------------------------------------------- #
noinst_HEADERS =

AM_CPPFLAGS += \
			   -Iproject/$(PROJECT_DIR)/$(DEMO)/include/ \
			   -I$(top_srcdir)/posix_simulator/portable/GCC/Posix \
			   -IFreeRTOS_KERNEL/$(KERNEL_DIR)/Source/include \
			   -IFreeRTOS_KERNEL/$(KERNEL_DIR)/

if FREERTOS_CMSIS
AM_CPPFLAGS += \
			   -I$(top_srcdir)/cmsis_interface/CMSIS-FreeRTOS/CMSIS/RTOS2/FreeRTOS/Include1 \
			   -I$(top_srcdir)/cmsis_interface/src_modified
endif

if APPLICATION
AM_CPPFLAGS += \
			   -I$(top_srcdir)/posix_simulator/ \
			   -I$(top_srcdir)/posix_simulator/FileIO
endif

target_SOURCES += project/main.c

# -------------------------------------------- #
freertos_kernel_libs =
platform_libs =
application_libs =
freertos_os_libs =
cmsis_interface =

freertos_kernel_libs += $(top_srcdir)/FreeRTOS_KERNEL/libkernel.a

freertos_os_libs += $(freertos_kernel_libs)

platform_libs += $(top_srcdir)/posix_simulator/libport_lib.la
platform_libs += $(top_srcdir)/posix_simulator/libfileio_lib.la
if USE_ASYNCIO
platform_libs += $(top_srcdir)/posix_simulator/libasynio_lib.la
endif

if FREERTOS_CMSIS
cmsis_interface += $(top_srcdir)/cmsis_interface/libcmsis.a
endif

if APPLICATION
application_libs += $(top_srcdir)/project/libapp.a
endif

target_LDADD += $(freertos_os_libs) $(cmsis_interface) $(platform_libs) $(application_libs)
