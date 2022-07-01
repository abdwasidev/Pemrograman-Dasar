#include <stdio.h>
#include <stdlib.h>

main(){
	float IPK;
	printf("Masukkan IPK anda : ");
	scanf("%f", &IPK);
	if (IPK >= 3.5){
		printf("\nIPK anda %f\n", IPK);
		printf("Anda Cumlaude!\n\n");
	}
}
