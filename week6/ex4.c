# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <unistd.h> 
# include <signal.h>
void returnstr()
{
	printf("\nThe program was terminat");
}
int main()
{
	signal(SIGINT,returnstr);
	signal(SIGKILL,returnstr);
	signal(SIGSTOP,returnstr);
	signal(SIGUSR1,returnstr);

	sleep(1000);
}