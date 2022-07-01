#include <stdio.h>
#include <stdlib.h>

main(){
	int i, j, k;
	printf("Masukkan angka: ");
	scanf("%d", &k);
	
	for(i=1;i<=k;i++){
		for(j=1;j<=i;j++){
			printf("*");
			printf("\n");
		}
	}
}
