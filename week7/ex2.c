# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <unistd.h> 

int main()
{
	int n;
	printf("write n\n");
	scanf("%d",&n);
	int *arr;
	arr = malloc(n*sizeof(int));
	for(int i =0;i<n;i++)
		arr[i]=i;
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	free(arr);

}