/*
 ============================================================================
 Name        : testCrossGCC.c
 Author      : Elyes ABEDA
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <libLog.h>

#define MODULE_NAME "testCrossGCC"

int main(void)
{
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
    myLog_init(MODULE_NAME);
    myLog(LOG_DEBUG, "*** %s ***", MODULE_NAME);
	myLog_close();
	return EXIT_SUCCESS;
}
