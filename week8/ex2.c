# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <unistd.h>
# include <string.h> 

int main()
{
	for(int i =0;i<10;i++){
	char* c = (char*)malloc(1024*1024*10);
	memset(c,'0',1024*1024*10);
	sleep(1);
	}

}