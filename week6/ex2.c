# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
#include <sys/wait.h>
# include <unistd.h> 

int main(int argc, char const *argv[])
{
	int fb[2];
	pipe(fb);
	char a[] = {"Hello world"};
	char b[100];
	
	pid_t pid;
	pid = fork();
	if(pid > 0)
	{
		write(fb[1],a,100);
		close(fb[1]);
	}
	else
	{	
		read(fb[0],b,100);
		printf("%s\n",b);
	}
	return 0;

}