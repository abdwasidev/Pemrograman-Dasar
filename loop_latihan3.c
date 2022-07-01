#include <stdio.h>
#include <stdlib.h>

main(){
	int password;
	
	do{
		printf("Password: ");
		scanf("%i", &password);
		
//		if use switch case
//		switch(password){
//			case 123456:
//				printf("password yang anda masukkan benar");
//			break;
//			default:
//				printf("Mohon maaf password yang anda masukkan salah!\n");
		}

//		if use if else
		if (password == 123456){
			printf("Password yang anda masukkan benar");
		} else{
			printf("Mohon maaf password yang anda masukkan salah!\n");		
		}

	} while(password != 123456);
	
	printf("\n");
}
