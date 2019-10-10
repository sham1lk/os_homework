#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h> 
#include <sys/resource.h>

int main()
{
   	struct rusage * usage = malloc(sizeof(struct rusage));;
    int err;
  for(int i =0;i<10;i++){
  char* c = (char*)malloc(1024*1024*10);
  memset(c,'0',1024*1024*10);
  err = getrusage(RUSAGE_SELF, usage);
  printf("%ld\n", (*usage).ru_maxrss);
  sleep(1);
  }
}