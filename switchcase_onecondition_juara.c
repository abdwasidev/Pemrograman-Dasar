#include <stdio.h>
#include <stdlib.h>

main(){
	int juara;
	printf("Masukkan nilai (1 - 3) : ");
	scanf("%d", &juara);
	switch(juara){
		case 1:
			printf("Anda juara 1!\n");
		break;
		case 2:
			printf("Anda juara 2!\n");
		break;
		case 3:
			printf("Anda juara 3!\n");
		break;
		default:
			printf("Anda bukan juara! coba lagi\n");
	}
}
