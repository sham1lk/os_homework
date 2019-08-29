#include <stdio.h>
#include <string.h>

void fig1(int n)
{
	for(int i =0;i<n;i++)
		{for(int k =0;k<i+1;k++)
			printf("*");
		printf("\n");}
}
void fig2(int n)
{
	fig1(n);
	for(int i =n-1;i!=-1;i--)
		{for(int k =0;k<i+1;k++)
			printf("*");
		printf("\n");
}
}
void fig3(int n)
{
for(int i =0;i<n;i++)
	{	for(int k =0;k<n;k++)
			printf("*");
		printf("\n");
	}
}

int main(int argc, char * argv[])
{
	int n;
	sscanf(argv[1],"%d",&n);
	fig1(n);
	printf("\n");
	printf("\n");
	printf("\n");
	fig2(n);
	printf("\n");
	printf("\n");
	printf("\n");
	fig3(n);

}