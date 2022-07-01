#include <stdio.h>
#include <stdlib.h>

main(){
	int pilihan;
	printf("Pilihan warna lampu lalu lintas : \n");
	printf("===================================\n");
	printf("1. Merah\n");
	printf("2. Kuning\n");
	printf("3. Hijau\n");
	printf("===================================\n");
	printf("Masukkan pilihan anda [1..3]: ");
	scanf("%i", &pilihan);
	if (pilihan == 1){
		printf("Lampu merah artinya tidak boleh jalan!");
	} else if (pilihan == 2){
		printf("Lampu kuning artinya siap-siap!");
	} else if (pilihan == 3){
		printf("Lampu hijau artinya jalan!");
	} else {
		printf("Pilihan yang anda masukkan salah!");
	}
	printf("\n\n");
	system("PAUSE");
}
