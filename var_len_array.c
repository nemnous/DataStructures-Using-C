//Cprogram to implement variable length array
//Command line arguments
//input number of elements at first followed by the array elements
#include <stdio.h>
#include <stdlib.h>

int main(int *argc, char *argv[] )
{
	int num,*ptr,sum=0;
	
	//argv[1] holds number of elements

	num = atoi(argv[1]);

	//memory allocated using malloc

	ptr =(int *)malloc(num*sizeof(int));

	if(ptr==NULL)
	{
		printf("memory not allocated");
		exit(0);
	}

	//setting array elements.

	for(int i=0;i<num;i++,ptr++)
	{
		*ptr = atoi(argv[i+2]);
		sum += *(ptr);
	}

	printf("Sum= %d",sum);
	free(ptr);
	return 0;
}