#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	char string[30];
	int panjang;
	
	printf("Masukkan suatu string =");
	fflush(stdin);
	gets(string);
	panjang = strlen(string);
	printf("string yang dimasukkan = %s\n", string);
	printf("panjang string = %i\n\n",panjang);
}

