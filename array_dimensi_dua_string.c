#include <stdio.h>
#include <stdlib.h>
main()
{
	char hari[7][10];
	int i;
	for(i=0;i<7;i++)
	{
		printf("Hari ke-%i : ",i+1); gets(hari[i]);
	}
	

	printf("\n");
	for(i=0;i<7;i++)
	{
		printf("Hari ke-%i : %s\n", i+1,hari[i]);
	}
	printf("\n\n");
}

