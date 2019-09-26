# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <unistd.h> 

int main(int argc, char const *argv[])
{
	int fb[2];
	pipe(fb);
	char a[] = {"Hello world"};
	char b[100];
	write(fb[1],a,100);
	read(fb[0],b,100);
	printf("%s\n",b);
	return 0;
}