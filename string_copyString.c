#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char string1[30];
	char string2[33];
	int k;
	
	printf("Masukkan string : ");
	fflush(stdin);
	gets(string1);
	
	printf("Masukkan jumlah karakter salin : ");
	scanf("%i",&k);
	
	strcpy(string2,string1);
	printf("Hasil penyalinan strcpy = %s\n",string2);
	
	strncpy(string2,string1,k);
	string2[k]='\0';	//menutup string
	printf("Hasil penyalinan strncpy = %s\n\n",string2);	
}

