#include <stdio.h>
#include <stdlib.h>

main(){
	float phi = 3.14;
	int pilihan;
	float jari, sisi, panjang, lebar, luas;
	printf("Daftar Bangun Datar Yang Ingin di Hitung :\n");
	printf("==============================================\n");
	printf("1. Lingkaran\n");
	printf("2. Bujur Sangkar\n");
	printf("3. Persegi Panjang\n");
	printf("==============================================\n");
	printf("Pilih Bangun Datar di Atas Yang di Hitung Luasnya (1 - 3) : ");
	scanf("%i", &pilihan);
	switch(pilihan){
		case 1:
			printf("\nMasukkan Jari-jari Lingkaran: ");
			scanf("%f", &jari);
			luas = phi * jari * jari;
			printf("Luas Lingkaran adalah %f\n", luas);
		break;
		case 2:
			printf("\nMasukkan Sisi Bujur Sangkar : ");
			scanf("%f", &sisi);
			luas = sisi * sisi;
			printf("Luas Bujur Sangkar adalah %f\n", luas);
		break;
		case 3:
			printf("\nMasukkan Panjang Persegi Panjang : ");
			scanf("%f", &panjang);
			printf("Masukkan Lebar Persegi Panjang : ");
			scanf("%f", &lebar);
			luas = panjang * lebar;
			printf("Luas Persegi Panjang adalah %f\n", luas);
		break;
		default:
			printf("\nPilihan yang anda masukkan salah\n");
	}
}
