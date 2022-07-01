#include <stdio.h>
#include <stdlib.h>

main(){
	int umur;
	printf("Masukkan umur anda : ");
	scanf("%i", &umur);
	if (umur < 17){
		printf("Anda belum bisa memiliki SIM\n\n");
	}
}
