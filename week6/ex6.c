# include <stdio.h>
# include <stdlib.h>
# include <unistd.h> 
# include <signal.h>
# include <sys/wait.h>
int main(int argc, char const *argv[])
{	
	int f[2];
	pipe(f);
	pid_t pid;
	pid_t pid2;
	int status;

	if((pid = fork()) == 0){
		//child 1
		char A[6];
		read(f[0],A,6);
		int pi = strtol(A,NULL,10);
		sleep(3);
		printf("first child waited 3 second\n");
		waitpid(pi,&status, 0);
		kill(pi,SIGSTOP);
		printf("first child killed second child\n");
	}else{
		if((pid2 = fork()) == 0){
			//child 2
				while(1)
				{
					printf("Second child alive\n");
					sleep(1);
				}
		}else{
			//parent
			char A[6];
			sprintf(A,"%d",pid2);
			write(f[1],A,6);
			waitpid(pid,&status, 0);
		printf("The second child state have changed\n");
		}
	}


return 0; 

}