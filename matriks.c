#include <stdio.h>
#include <stdlib.h>
 
int main(){
	int baris, kolom, i, j, A[10][10], B[10][10], C[10][10], npm;
	
	
	char nama[50];
	printf("Masukkan Nama: ");
	fflush(stdin);
	gets(nama);
	printf("Tiga(3) digit NPM: ");
	scanf("%i", &npm);
	
	printf("\n");
	
	printf("Nama Saya adalah %s\n", nama);
	printf("Tiga(3) digit NPM adalah %i\n", npm);
	
	printf("\n");
	
	do {
		printf("Silahkan Input Baris dan Kolom Matriks!\n");
		printf("Jumlah Baris: ");
		scanf("%i", &baris);
		printf("Jumlah Kolom: ");
		scanf("%i", &kolom);
		printf("Baris Matriks adalah %i\n", baris);
		printf("Kolom Matriks adalah %i\n", kolom);
		
			printf("\n");
			
			printf("Input Nilai ke Matrik Pertama :\n");
			for (i = 0; i < baris; i++){
			  for (j = 0; j < kolom; j++){
			 	printf("Input Matriks 1[%d][%d]: ",i+1,j+1);
				scanf("%d", &A[i][j]);
			  }
			}
			
			printf("\n");
			
			printf("Matrik Pertama : \n");
			for (i=0; i< baris; i++){
				for (j=0; j<kolom; j++){
			   		printf("%3d", A[i][j]);
			   }
			   printf("\n");
			}
			
			printf("\n");
			
			printf("Input Nilai ke Matrik Kedua :\n");
			for (i = 0; i < baris; i++){   	
			  for (j = 0 ; j < kolom; j++){
			  	printf("Input Matriks 2[%d][%d]: ",i+1,j+1);
				scanf("%d", &B[i][j]);
			  }
			}
			
			printf("\n");
			
			printf("Matrik Kedua : \n");
			for (i=0; i< baris; i++){
				for (j=0; j<kolom; j++){
			   		printf("%3d", B[i][j]);
			   }
			   printf("\n");
			}
			
		if ((baris == 3) && (kolom ==3)){
			
			printf("\n");
		    
		    printf("Hasil Perkalian Matrik :\n");
		    for(i = 0; i < baris; i++){
		      for(j = 0; j < kolom; j++){
		        C[i][j] = C[i][j] + (A[i][j] * B[i][j]);
		        printf("%d\t", C[i][j]);
		      }
		      printf("\n");
		    }
			
			return 0;
		}
		
	} while (baris == 3 && kolom ==3);
}
