#include <stdio.h>
#ifndef 2_MAIN_C
#define 2_MAIN_C
#define _FILE_ "2-main.c"
/**
 * main - print the the name of the file it compiled from
 *
 * Return: 0;
 */

int main(void)
{
	printf("%S\n", _FILE_);

	return(0);
}
