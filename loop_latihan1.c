#include <stdio.h>
#include <stdlib.h>

main(){
	int i, input;
	
	printf("Masukkan Angka: ");
	scanf("%i", &input);
	
	for(i = 1 ; i <= input; i++){
		if (i % 3 == 0){
			printf("%d\n", i);
		}
	}
	
	printf("\n");
}
