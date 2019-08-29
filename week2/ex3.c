#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
	int n;
	sscanf(argv[1],"%d",&n);
	for(int  i = 0;i<n;i++)
	{
		for(int k=0;k<(((2*n-1) - (2*(i+1)-1))/2);k++)
			printf(" ");

		for(int k = 0; k<(2*(i+1)-1);k++)
			printf("*");

		for(int k=0;k<(((2*n-1) - (2*(i+1)-1))/2);k++)
			printf(" ");
		printf("\n");

	}
}