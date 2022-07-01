#include <stdio.h>
#include <stdlib.h>


// Pass by value
//void perkalian_lima(int bil);
//void perkalian_lima(int bil){
//	bil=bil*5;
//	printf("Hasil Perkalian Lima : %i\n",bil);
//}

// Pass by reference
void perkalian_lima(int *bil);
void perkalian_lima(int *bil){
	*bil=(*bil)*5;
	printf("Hasil Perkalian Lima : %i\n",*bil);
}


main(){
	// Pass by value
//	int bil_isi;
//	printf("Masukkan bilangan : ");
//	scanf("%i",&bil_isi);
//	perkalian_lima(bil_isi);
//	printf("Bilangan input : %i\n\n",bil_isi);
	
	// Pass by reference
	int bil_isi;
	printf("Masukkan bilangan : ");
	scanf("%i",&bil_isi);
	perkalian_lima(&bil_isi);
	printf("Bilangan input : %i\n\n",bil_isi);


}

