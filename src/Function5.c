#include "Function5.h"
#include "Lab12.h"


void Function5()
{
	int i = 0;
	int *p = (int *) malloc(sizeof(int) * ARRAY_SIZE);
	if (p == NULL)
	{
		fprintf(stderr, "function5(): Error allocating p\n");
		exit(1);
	}

	printf("In function5()...\n");

	for (i=0; i<ARRAY_SIZE; i++)
	{
		p[i]=i;
	}

#ifndef NDEBUG
	for (i=0; i<PARTIAL_SIZE; i++)
	{
		printf("function5(): %s = %d,%s = %d ", PR(i),i,PR(p[i]), p[i]);
		printf("\n");
	}
#endif 

	free(p);
}
