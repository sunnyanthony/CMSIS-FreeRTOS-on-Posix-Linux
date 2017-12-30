
if !FREERTOS_CMSIS
if KERNEL_V5_4_2
noinst_LIBRARIES += libapp.a	

libapp_a_CPPFLAGS = \
			 -I$(srcdir)/$(DEMO_DIR)/include \
			 $(AM_CPPFLAGS)

# It can compile each task in each folder.
# Or, it also can use different libtaskx_a_xxxxx to make each task to each static library
libapp_a_SOURCES = \
				   %reldir%/Common_Demo/FULL/BlockQ.c \
				   %reldir%/Common_Demo/include/BlockQ.h \
				   %reldir%/Common_Demo/FULL/PollQ.c \
				   %reldir%/Common_Demo/include/PollQ.h \
				   %reldir%/Common_Demo/FULL/death.c \
				   %reldir%/Common_Demo/include/death.h \
				   %reldir%/Common_Demo/FULL/dynamic.c \
				   %reldir%/Common_Demo/include/dynamic.h \
				   %reldir%/Common_Demo/FULL/events.c \
				   %reldir%/Common_Demo/include/mevents.h \
				   %reldir%/Common_Demo/FULL/flash.c \
				   %reldir%/Common_Demo/include/flash.h \
				   %reldir%/Common_Demo/FULL/flop.c \
				   %reldir%/Common_Demo/include/flop.h \
				   %reldir%/Common_Demo/FULL/integer.c \
				   %reldir%/Common_Demo/include/integer.h \
				   %reldir%/Common_Demo/FULL/print.c \
				   %reldir%/Common_Demo/include/print.h \
				   %reldir%/Common_Demo/FULL/semtest.c \
				   %reldir%/Common_Demo/include/semtest.h \
				   %reldir%/Common_Demo/Minimal/GenQTest.c \
				   %reldir%/Common_Demo/include/GenQTest.h \
				   %reldir%/Common_Demo/Minimal/QPeek.c \
				   %reldir%/Common_Demo/include/QPeek.h \
				   %reldir%/Common_Demo/Minimal/blocktim.c \
				   %reldir%/Common_Demo/include/blocktim.h \
				   %reldir%/Common_Demo/Minimal/countsem.c \
				   %reldir%/Common_Demo/include/countsem.h \
				   %reldir%/Common_Demo/Minimal/crflash.c \
				   %reldir%/Common_Demo/include/crflash.h \
				   %reldir%/Common_Demo/Minimal/crhook.c \
				   %reldir%/Common_Demo/include/crhook.h \
				   %reldir%/Common_Demo/Minimal/recmutex.c \
				   %reldir%/Common_Demo/include/recmutex.h

libapp_a_SOURCES += \
				   %reldir%/ParTest/partest.c \
				   %reldir%/Common_Demo/include/partest.h
endif
endif
