#include <stdio.h>
#include <stdlib.h>
main()
{
	int x=10;
	int *px1;
	int **px2;
	px1 = &x;
	px2 = &px1;
	printf("Hasil menggunakan 1 pointer \n");
	
	printf("Nilai x = %i\n",*px1);
	printf("Alamat x = %p\n",px1);
	printf("Alamat px1 = %p\n\n",&px1);
	printf("hasil menggunakan pointer ke pointer\n");
	printf("Nilai x = %i\n",**px2);
	printf("Alamat x = %p\n",*px2);
	printf("Alamat px1 = %p\n\n",px2);
}

