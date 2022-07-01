#include <stdio.h>
#include <stdlib.h>


int main(){
	// Inisiasi tipe data
	int baris, kolom, i, j, matriksPertama[3][3], matriksKedua[3][3], hasil[10][10], perkalianMatriks[10][10];
	
	// Deklarasi
	char nama[50] = "Abdul Wasi Al Afif";
	char npm[50] = "20081010165";
	char note[10] = "Ganjil";
	
	baris = 3;
	kolom = 3;
	
	// Detail
	printf("Nama\t = %s\n", nama);
	printf("NPM\t = %s - %s\n\n", npm, note);
	
	printf("Baris Matriks adalah %i\n", baris);
	printf("Kolom Matriks adalah %i\n", kolom);

	printf("\n");
	
	printf("Input Nilai ke Matrik Pertama : \n\n");
	
	// Input Matriks Pertama
	for (i = 0; i < baris; i++){
	  	for (j = 0; j < kolom; j++){
	 		printf("Input Matriks Pertama Baris[%d] Kolom[%d]: ", i+1, j+1);
			scanf("%d", &matriksPertama[i][j]);
	  }
	}
	
	printf("\n");
	
	// Output Matriks Pertama
	printf("Matrik Pertama : \n");
	
	for (i=0; i < baris; i++){
		for (j=0; j < kolom; j++){
	   		printf("%3d", matriksPertama[i][j]);
	   }
	   printf("\n");
	}
	
	printf("\n");
	
	printf("Input Nilai ke Matrik Kedua : \n\n");
	
	// Input Matriks Kedua
	for (i = 0; i < baris; i++){
	  	for (j = 0; j < kolom; j++){
	 		printf("Input Matriks Kedua Baris[%d] Kolom[%d]: ", i+1, j+1);
			scanf("%d", &matriksKedua[i][j]);
	  }
	}
	
	printf("\n");
	
	// Output Matriks Kedua
	printf("Matrik Kedua : \n");
	
	for (i=0; i < baris; i++){
		for (j=0; j < kolom; j++){
	   		printf("%3d", matriksKedua[i][j]);
	   }
	   printf("\n");
	   
	}
	
	printf("\n");
	
    // Perkalian Matriks
    printf("Hasil Perkalian Matrik :\n");
    
    for(i = 0; i < baris; i++){
      	for(j = 0; j < kolom; j++){
	    	perkalianMatriks[i][j] =+ ((matriksPertama[i][j] * matriksKedua[j][i]) +  (matriksPertama[i][j] * matriksKedua[j][i]) +  (matriksPertama[i][j] * matriksKedua[j][i]));
	    	printf("%d\t", perkalianMatriks[i][j]);
      	}
      	printf("\n");
    }
	
	printf("\n");
}
