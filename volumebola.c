#include <stdio.h>
#include <stdlib.h>

void volume(int *r);
void volume (int *r){
	float pi, bola;
	pi = 3.14;
	bola = 4 / 3 * pi * *r * *r * *r;
	printf("Volume Bola dengan jari-jari %i adalah %f\n", *r, bola);
}


void main(){
	int r;
	printf("Masukkan jari-jari: ");
	scanf("%i", &r);
	printf("");
	volume(&r);
}


