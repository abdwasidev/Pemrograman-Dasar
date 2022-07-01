#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char stringPertama[50], stringKedua[50];
	printf("Masukkan String Pertama: ");
	fflush(stdin);
	gets(stringPertama);
	
	printf("Masukkan String Kedua : ");
	fflush(stdin);
	gets(stringKedua);
	
	printf("\n");
	
	printf("Hasil Penggabungan String = %s\n", strcat(stringPertama, stringKedua));
}

