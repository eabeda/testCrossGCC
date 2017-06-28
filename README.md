Sample readme file for testCrossGCC project.

git init
git add *
git commit -m "first commit"
git remote add origin https://github.com/eabeda/testCrossGCC.git
git push -u origin master

$ sudo apt-get install gcc-arm-linux-gnueabi

$ arm-linux-gnueabi-gcc -c ./src/testCrossGCC.c
$ arm-linux-gnueabi-gcc testCrossGCC.o -o testCrossGCC

Eclipse :
Executable:
Cross compiler prefix: arm-linux-gnueabi-
Cross compiler path: /usr
Project->proprities->C/C++ Build->Settings->Cross GCC Compiler->Includes->Include paths => Add (+): /tmp/include
Project->proprities->C/C++ Build->Settings->Cross GCC Linker->Libraries->libraries (-l) => Add (+): Log
Project->proprities->C/C++ Build->Settings->Cross GCC Linker->Libraries->Library search path (-L) => Add (+): /tmp/lib
Autotools:
Project->proprities->C/C++ Build->Behavior->Build : all install (optional)
Project->proprities->C/C++ Build->Behavior->Clean : clean (optional)
Project->proprities->Autotools->Configure Settings->Directory specifiers->Arch-independant install directory (--prefix): /tmp
Project->proprities->Autotools->Configure Settings->Platform specifiers->Host platform (--host): arm-linux-gnueabi
Project->proprities->Autotools->Configure Settings->Platform specifiers->Target platform (--target): arm-linux-gnueabi (optional 1)
Project->proprities->Autotools->Configure Settings->Platform specifiers->Build platform (--build): x86_64-linux-gnu (optional 2)
configure --host=arm-linux-gnueabi --build=x86_64-linux-gnu --target=arm-linux-gnueabi --prefix=/tmp  

0/1
checking build system type... x86_64-unknown-linux-gnu
checking host system type... arm-unknown-linux-gnueabi
checking target system type... arm-unknown-linux-gnueabi

2
checking build system type... x86_64-pc-linux-gnu
checking host system type... arm-unknown-linux-gnueabi
checking target system type... arm-unknown-linux-gnueabi

$ file src/testCrossGCC
src/testCrossGCC: ELF 32-bit LSB  executable, ARM, EABI5 version 1 (SYSV), dynamically linked (uses shared libs), for GNU/Linux 2.6.32, BuildID[sha1]=d0b08a78711f5f2246315454aacfeb3951fe1dec, not stripped

$ sudo apt-get install qemu-user

$ qemu-arm Debug/testCrossGCC

$ file /tmp/lib/libLog.so.0.0.0
/tmp/lib/libLog.so.0.0.0: ELF 32-bit LSB  shared object, ARM, EABI5 version 1 (SYSV), dynamically linked, BuildID[sha1]=a314b90a1bda6c1147c8f5daeef5679b9cbc0b9b, not stripped

$ export testCrossGCC_LOG_LEVEL=7 testCrossGCC_LOG_BACKEND=2 testCrossGCC_LOG_COLOR=3
$ qemu-arm Debug/testCrossGCC
