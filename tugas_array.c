#include <stdio.h>
#include <stdlib.h>

// Abdul Wasi' Al-Afif
// 20081010165
// Final Project <Aljabar dan Linear Matriks>
// Matriks 2x2 dan 3x3
 
int main(){
	// Inisiasi tipe data
	int baris, kolom, i, j, matriksPertama[10][10], matriksKedua[10][10], hasil[10][10];
				
	baris = 3;
	kolom = 3;
	
	// Output Baris dan Kolom
	printf("Baris Matriks adalah %i\n", baris);
	printf("Kolom Matriks adalah %i\n", kolom);

	printf("\n");
	
	// Input Matriks Pertama
	printf("Input Nilai ke Matriks Pertama :\n");
	for (i = 0; i < baris; i++){
	  	for (j = 0; j < kolom; j++){
	 		printf("Input Matriks Pertama Baris[%d] Kolom[%d]: ", i+1, j+1);
			scanf("%d", &matriksPertama[i][j]);
	  }
	}
	
	printf("\n");
	
	// Output Matriks Pertama
	printf("Matriks Pertama : \n");
	for (i = 0; i < baris; i++){
		for (j = 0; j < kolom; j++){
	   		printf("%3d", matriksPertama[i][j]);
	   }
	   printf("\n");
	}
	
	printf("\n");
	
	// Input Matriks Kedua
	printf("Input Nilai ke Matriks Kedua :\n");
	for (i = 0; i < baris; i++){   	
	  	for (j = 0 ; j < kolom; j++){
	  		printf("Input Matriks Kedua Baris[%d] Kolom[%d]: ", i+1, j+1);
			scanf("%d", &matriksKedua[i][j]);
	  	}
	}
	
	printf("\n");
	
	// Output Matriks Kedua
	printf("Matriks Kedua : \n");
	for (i = 0; i < baris; i++){
		for (j = 0; j < kolom; j++){
	   		printf("%3d", matriksKedua[i][j]);
	   }
	   printf("\n");
	}
	
	printf("\n");
	
	// Penjumlahan Matriks  
	printf("Hasil Penjumlahan Matrik :\n");
	for (i = 0; i < baris; i++) {
	  	for (j = 0 ; j < kolom; j++) {
	     	hasil[i][j] = matriksPertama[i][j] + matriksKedua[i][j];
	    	printf("%d\t", hasil[i][j]);
	  	}
	  	printf("\n");
	}
	
	printf("\n");
	
	// Pengurangan Matriks
	printf("Hasil Pengurangan Matrik :\n");
	for (i = 0; i < baris; i++) {
	  	for (j = 0 ; j < kolom; j++) {
	     	hasil[i][j] = matriksPertama[i][j] - matriksKedua[i][j];
	     	printf("%d\t", hasil[i][j]);
	  	}
	  	printf("\n");
	}
	
	printf("\n");
    
    // Perkalian Matriks
    printf("Hasil Perkalian Matrik :\n");
    for(i = 0; i < baris; i++){
      	for(j = 0; j < kolom; j++){
        	hasil[i][j] = hasil[i][j] + (matriksPertama[i][j] * matriksKedua[i][j]);
        	printf("%d\t", hasil[i][j]);
      	}
      	printf("\n");
    }
	
	printf("\n");
}




//#include <stdio.h>
//#include <stdlib.h>
//
//// Abdul Wasi' Al-Afif
//// 20081010165
//// Final Project <Aljabar dan Linear Matriks>
//// Matriks 2x2 dan 3x3
//
//int main(){
//	// Inisiasi tipe data
//	int baris, kolom, i, j, matriksPertama[3][3], matriksKedua[3][3], hasil[10][10], perkalianMatriks[10][10];
//	
//	char nama[50] = "Abdul Wasi Al Afif";
//	char npm[50] = "20081010165";
//	char note[10] = "Ganjil";
//	
//	baris = 3;
//	kolom = 3;
//	
//	// Detail
//	printf("Nama\t = %s\n", nama);
//	printf("NPM\t = %s - %s\n\n", npm, note);
//	
//	printf("Baris Matriks adalah %i\n", baris);
//	printf("Kolom Matriks adalah %i\n", kolom);
//
//	printf("\n");
//	
//	printf("Input Nilai ke Matrik Pertama : \n\n");
//	
//	// Input Matriks Pertama
//	for (i = 0; i < baris; i++){
//	  	for (j = 0; j < kolom; j++){
//	 		printf("Input Matriks Pertama Baris[%d] Kolom[%d]: ", i+1, j+1);
//			scanf("%d", &matriksPertama[i][j]);
//	  }
//	}
//	
//	printf("\n");
//	
//	// Output Matriks Pertama
//	printf("Matrik Pertama : \n");
//	
//	for (i=0; i < baris; i++){
//		for (j=0; j < kolom; j++){
//	   		printf("%3d", matriksPertama[i][j]);
//	   }
//	   printf("\n");
//	}
//	
//	printf("\n");
//	
//	printf("Input Nilai ke Matrik Kedua : \n\n");
//	
//	// Input Matriks Kedua
//	for (i = 0; i < baris; i++){
//	  	for (j = 0; j < kolom; j++){
//	 		printf("Input Matriks Kedua Baris[%d] Kolom[%d]: ", i+1, j+1);
//			scanf("%d", &matriksKedua[i][j]);
//	  }
//	}
//	
//	printf("\n");
//	
//	// Output Matriks Kedua
//	printf("Matrik Kedua : \n");
//	
//	for (i=0; i < baris; i++){
//		for (j=0; j < kolom; j++){
//	   		printf("%3d", matriksKedua[i][j]);
//	   }
//	   printf("\n");
//	   
//	}
//	
//	printf("\n");
//	
//	perkalianMatriks[i][j];
//    
//	// Baris Pertama & (Kolom Pertama)
//	perkalianMatriks[1][1] = ((matriksPertama[1][1] * matriksKedua[1][1]) +  (matriksPertama[1][2] * matriksKedua[2][1]) +  (matriksPertama[1][3] * matriksKedua[3][1]));
//	perkalianMatriks[2][1] = ((matriksPertama[2][1] * matriksKedua[1][1]) +  (matriksPertama[2][2] * matriksKedua[2][1]) +  (matriksPertama[2][3] * matriksKedua[3][1]));
//	perkalianMatriks[3][1] = ((matriksPertama[3][1] * matriksKedua[1][1]) +  (matriksPertama[3][2] * matriksKedua[2][1]) +  (matriksPertama[3][3] * matriksKedua[3][1]));
//	// Baris Kedua & (Kolom Kedua)
//	perkalianMatriks[1][2] = ((matriksPertama[1][1] * matriksKedua[1][2]) +  (matriksPertama[1][2] * matriksKedua[2][2]) +  (matriksPertama[1][3] * matriksKedua[3][2]));
//	perkalianMatriks[2][2] = ((matriksPertama[2][1] * matriksKedua[1][2]) +  (matriksPertama[2][2] * matriksKedua[2][2]) +  (matriksPertama[2][3] * matriksKedua[3][2]));
//	perkalianMatriks[3][2] = ((matriksPertama[3][1] * matriksKedua[1][2]) +  (matriksPertama[3][2] * matriksKedua[2][2]) +  (matriksPertama[3][3] * matriksKedua[3][2]));
//	// Baris Ketiga & (Kolom Ketiga)
//	perkalianMatriks[1][3] = ((matriksPertama[1][1] * matriksKedua[1][3]) +  (matriksPertama[1][2] * matriksKedua[2][3]) +  (matriksPertama[1][3] * matriksKedua[3][3]));
//	perkalianMatriks[2][3] = ((matriksPertama[2][1] * matriksKedua[1][3]) +  (matriksPertama[2][2] * matriksKedua[2][3]) +  (matriksPertama[2][3] * matriksKedua[3][3]));
//	perkalianMatriks[3][3] = ((matriksPertama[3][1] * matriksKedua[1][3]) +  (matriksPertama[3][2] * matriksKedua[2][3]) +  (matriksPertama[3][3] * matriksKedua[3][3]));
//	
////	printf("%d\t\n", perkalianMatriks[1][1]);
////	printf("%d\t\n", perkalianMatriks[1][2]);
////	printf("%d\t\n", perkalianMatriks[1][3]);
////	printf("%d\t\n", perkalianMatriks[2][1]);
////	printf("%d\t\n", perkalianMatriks[2][2]);
////	printf("%d\t\n", perkalianMatriks[2][3]);
////	printf("%d\t\n", perkalianMatriks[3][1]);
////	printf("%d\t\n", perkalianMatriks[3][2]);
////	printf("%d\t\n", perkalianMatriks[3][3]);
//	
//	
//    // Perkalian Matriks
//    printf("Hasil Perkalian Matrik :\n");
//    for(i = 0; i < baris; i++){
//      	for(j = 0; j < kolom; j++){
//      		// rumus perkalian matriks 3x3 [a][b] & [c][d]
//      		// ((matriksPertama[i] * matriksKedua[j]) +  (matriksPertama[i] * matriksKedua[j]) +  (matriksPertama[i] * matriksKedua[]))
//	    	 perkalianMatriks[i][j] =+ matriksPertama[i][j] * matriksKedua[j][i];
//	    	// perkalianMatriks[i][j] =+ ((matriksPertama[i][j] * matriksKedua[j][i]) +  (matriksPertama[i][j] * matriksKedua[j][i]) +  (matriksPertama[i][j] * matriksKedua[j][i]));
//	    	printf("%d\t", perkalianMatriks[i][j]);
//      	}
//      	printf("\n");
//    }
//	
//	printf("\n");
//}
