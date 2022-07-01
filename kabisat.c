#include <stdio.h>
#include <stdlib.h>

void kabisat(int *tahun);
void kabisat(int *tahun){
	int milenium, abad, dasawarsa, windu;
	
	printf("Anda memilih tahun %i.\n\n", *tahun);
	if (*tahun % 4 == 0){
		printf("Tahun %i adalah tahun Kabisat.\n", *tahun);
		
	} else {
		printf("Tahun %i bukan tahun Kabisat.\n", *tahun);
	}
	
	milenium = *tahun / 1000;
	abad = *tahun / 100;
	dasawarsa = *tahun / 10;
	windu = *tahun / 8;
	
	printf("%i Tahun = %i Milenium\n", *tahun, milenium);
	printf("%i Tahun = %i Abad\n", *tahun, abad);
	printf("%i Tahun = %i Dasawarsa\n", *tahun, dasawarsa);
	printf("%i Tahun = %i Windu\n", *tahun, windu);
	
}

void main(){
	int tahun;
	printf("Masukkan tahun yang ingin dicek: ");
	scanf("%i", &tahun);
	printf("");
	kabisat(&tahun);
}


