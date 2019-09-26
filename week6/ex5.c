# include <stdio.h>
# include <stdlib.h>
# include <unistd.h> 
# include <signal.h>

int main(int argc, char const *argv[])
{	
	pid_t pid;
	pid = fork();
	if(pid > 0)
	{
		sleep(10);
		
		kill(0, SIGTERM);
	}
	else
	{	
		while(1)
		{
			printf("I’m alive\n");
			sleep(1);
		}
	}
	return 0;

}