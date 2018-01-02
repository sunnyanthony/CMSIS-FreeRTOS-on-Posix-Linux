#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([Freertos-Posix_simulator-CMSIS], [0.1], [anthony_cheng@gmail.com])
# AC_CONFIG_SRCDIR([FreeRTOS_KERNEL/FreeRTOS_v5.4.2/main.c])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])
AC_CONFIG_HEADERS([config.h])


# Checks for programs.
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_MAKE_SET
# AC_PROG_RANLIB
AC_PROG_CPP
AS_IF([test -z $CMSIS],[CMSIS=no])
ENABLE_CMSIS=no
AS_IF( [test x$CMSIS = xyes ],
	  [AC_CHECK_FILE(cmsis_interface/CMSIS-FreeRTOS/CMSIS/RTOS2/FreeRTOS/Include1/cmsis_os.h, [ENABLE_CMSIS=yes], [AC_MSG_ERROR([please clone freertos-cmsis submodule])])
	  ]
	  )
AM_CONDITIONAL([FREERTOS_CMSIS],[test x$ENABLE_CMSIS = xyes])

# for shared library
AM_PROG_AR
# for dynamic shared library
LT_INIT


# Checks for libraries.
# pthread for multi-thread
AC_CHECK_LIB([pthread], [pthread_create])
# FIXME: Replace `main' with a function in `-lbcc':
# AC_CHECK_LIB([bcc], [main])
# FIXME: Replace `main' with a function in `-lc' for BSD:
AC_CHECK_LIB([c], [getitimer])
# FIXME: Replace `main' with a function in `-lm':
# AC_CHECK_LIB([m], [main])
# FIXME: Replace `main' with a function in `-lrt':
AC_CHECK_LIB([rt], [timer_create])

# Checks for header files.
AC_CHECK_HEADERS([arpa/inet.h fcntl.h inttypes.h limits.h malloc.h netinet/in.h stddef.h stdint.h stdlib.h string.h sys/ioctl.h sys/param.h sys/socket.h sys/time.h termios.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_INT8_T
AC_TYPE_OFF_T
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T
AC_CHECK_MEMBERS([struct stat.st_blksize])
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T
AC_CHECK_TYPES([ptrdiff_t])

# Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([bzero gethostbyname inet_ntoa isascii memmove memset pow select socket strcasecmp strchr strncasecmp strpbrk strrchr strstr strtol strtoul])

# ------------------------------------------------------------------- #

# ----------------- freertos kernel version ---------------- #
KERNEL=
KERNEL_DIR=FreeRTOS_
AS_IF([test -z $KERNEL_VERSION],[KERNEL_VERSION=V5])
AS_CASE([$KERNEL_VERSION],
		[V5], [KERNEL=v5.4.2]
		[V8], [KERNEL=v8.2.3],
		[V10], [KERNEL=v10.0.0]
		)
KERNEL_DIR+=$KERNEL
AC_SUBST(KERNEL_DIR)
AM_CONDITIONAL([KERNEL_V5_4_2],[test x$KERNEL_VERSION = xV5])
AM_CONDITIONAL([KERNEL_V8_2_3],[test x$KERNEL_VERSION = xV8])
AM_CONDITIONAL([KERNEL_V10_0_0],[test x$KERNEL_VERSION = xV10])

# -------------------- demo selection ---------------- #
DEMO_DIR=
AS_IF([test -z $DEMO],[DEMO=Common_Demo])
AC_SUBST(DEMO_DIR,[$DEMO])

# --------------------- project setting --------------- #
PROJECT_DIR=FreeRTOS_
AS_IF( [test x$CMSIS = xyes ],[PROJECT_DIR+=with_CMSIS_],[PROJECT_DIR+=without_CMSIS_])
PROJECT_DIR+=$KERNEL
AC_SUBST(PROJECT_DIR)
AC_CONFIG_LINKS([project/main.c:project/$PROJECT_DIR/main.c])

# ----------------------- makefile generated ---------------------- #
AC_CONFIG_FILES([Makefile
                 project/Makefile
				 posix_simulator/Makefile
				 FreeRTOS_KERNEL/Makefile
				])
AC_OUTPUT
