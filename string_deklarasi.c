#include <stdio.h>
#include <stdlib.h>
main()
{
	char nama1[31];			//dekalrasi menggunakan array
	char *nama2 = "Faisal Muttaqin"; 	//deklarasi menggunakan pointer
	printf("Masukkan nama pertama:"); fflush(stdin);
	gets(nama1);
	printf("Nama Pertama = %s\n",nama1);
	printf("Nama Kedua = %s\n\n",nama2);
}

