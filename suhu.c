#include <stdio.h>
#include <stdlib.h>

void suhu(float *celcius);
void suhu(float *celcius){
	float reamur, farenheit, kelvin, suhu;
	reamur = *celcius * 4 / 5;
	farenheit = (*celcius * 9 / 5) + 32;
	kelvin = *celcius + 273;
	printf("1. Reamur = %f\n", reamur);
	printf("2. Farenheit = %f\n", farenheit);
	printf("3. Kelvin = %f\n", kelvin);
}


void main(){
	float celcius;
	printf("Masukkan bilangan : ");
	scanf("%f", &celcius);
	printf("");
	printf("Konversi suhu celcius ke:\n");
	suhu(&celcius);
}


