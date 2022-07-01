#include <stdio.h>
#include <stdlib.h>
main(){
	int v;
	int *pv;
	printf("Masukkan nilai v =");
	scanf("%i",&v);
	printf("\n");
	//penugasan pointer
	pv=&v;
	printf("Hasli tanpa pointer = \n");
	printf("Nilai v = %i\n",v);
	printf("Alamat v = 0x%p\n\n",&v);
	printf("Hasli tanpa pointer = \n");
	printf("Nilai v = %i\n",pv);
	printf("Alamat v = 0x%p\n\n",&pv);
}

