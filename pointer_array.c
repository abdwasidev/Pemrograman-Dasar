#include <stdio.h>
#include <stdlib.h>
main()
{
	// First
	int bil_bulat[]={0,1,2,3,4};
	int *pbil, i;
	//penugasan array;
	pbil = bil_bulat;
	for(i=0;i<5;i++)
	{
		printf("Nilai yang ditunjuk  [%i] : %i\n",i,*(pbil));
		printf("Alamat yang ditunjuk [%i] :0x%p\n\n",i,(pbil));
		pbil++;
	}
	
	// Two
//	int bil_bulat[]={0,1,2,3,4};
//	int *pbil, i;
//	//penugasan array;
//	pbil = bil_bulat;
//	for(i=0;i<5;i++)
//	{
//		printf("Nilai yang ditunjuk  [%i] : %i\n",i+1,*(pbil+i));
//		printf("Alamat yang ditunjuk [%i] :0x%p\n\n",i+1,(pbil+i));
//	}
}

