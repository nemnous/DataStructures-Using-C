//Implementation of Linear Search using C
//command line arguments
//first argument is number of elements in array followed by target number and then the elements of array

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int num,*ptr,target,pos;
	num = atoi(argv[1]);
	target=atoi(argv[2]);

	ptr = (int *)malloc(num*sizeof(int));

	for(int i=0;i<num;i++,ptr++)
	{
		*ptr = atoi(argv[i+3]);
		if( *ptr == target)
		{
			printf("target found at pos %d \n",i+1 );
			exit(0);
		}
		
	}
}