#include <stdio.h>
#include <stdlib.h>

main()
{
	int x[5],i;
	for(i=0;i<=4;i++)
	{
		printf("Masukkan nilai %i : ",i+1);
		scanf("%i",&x[i]);
	}
	printf("\n");
	for(i=0;i<=4;i++)
	{
		printf("Nilai ke-%i = %i\n",i+1,x[i]);
	}
	printf("\n");
}

