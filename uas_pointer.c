#include <stdio.h>
#include <stdlib.h>

main(){
	// inisiasi variabel sisi
	int sisi;
	
	// inisiasi pointer luas
	int *luas;
	
	// inisiasi pointer volume
	int **volume;	
	
	// deklarasi variabel sisi
	sisi = 15;
	
	// penugasan pointer luas
	luas = &sisi;
	
	// penugasan pointer volume
	volume = &luas;

	// hasil pointer	
	printf("Hasil Pointer\n\n");
	printf("Nilai dari variable sisi\n");
	printf("Nilai Sisi = %i\n\n", **volume);
	
	printf("Alamat dari pointer luas\n");
	printf("Alamat Luas = %p\n\n", *volume);
	
	printf("Alamat dari pointer volume\n");
	printf("Alamat Volume = %p\n\n", volume);
	
}

