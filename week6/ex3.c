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
	sleep(1000);
}