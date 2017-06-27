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
Autotools:
Properties->Autotools->Configure Settings->Directory specifiers->Arch-independant install directory (--prefix): /tmp
Properties->Autotools->Configure Settings->Platform specifiers->Host platform (--host): arm-linux-gnueabi
configure --host=arm-linux-gnueabi --prefix=/tmp

$ file src/testCrossGCC
src/testCrossGCC: ELF 32-bit LSB  executable, ARM, EABI5 version 1 (SYSV), dynamically linked (uses shared libs), for GNU/Linux 2.6.32, BuildID[sha1]=d0b08a78711f5f2246315454aacfeb3951fe1dec, not stripped

$ sudo apt-get install qemu-user

$ qemu-arm Debug/testCrossGCC
