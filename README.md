# FreeRTOS-CMSIS_Posix
CFPS(CMSIS-FreeRTOS with Posix simulator)

* Support Ubuntu 16.04
* Support Macos 10.13 (Darwin)

## Compile
1. Flags
	* KERNEL_VERSION
		* V8, V5, V10(unsupport)
	* CMSIS
		* yes, no(default is no)
	* `--enable-asyncio`
		* yes, no(default is yes)
2. autotools
	* please install auto tools by yourself
	* check `autoconf`, `automake`, `m4`, `perl` and `libtool`
	* if you are macos user, please using Homebrew to install autotools

3. Create configure file
	1. `autoreconf --install`
	2. `./configure`
		* e.g. `KERNEL_VERSION=V8 CMSIS=yes ./configure --enable-asyncio=no`

3. Makefile
	* `make`
