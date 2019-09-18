#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void* helloWorld(void *args) {
	int i = *((int *)args);
	printf("It's %d thread\n",i);
    printf("Hello from thread %d!\n",i);
}

int main() {
    
    int n = 10;
 	for(int i = 1;i<n;i++)
    {	pthread_t thread;
    	int *b = malloc(sizeof(int));
    	*b = i;
    	pthread_create(&thread, NULL, helloWorld, (void*) b);
    	printf("%d thread created\n",i);
    	pthread_join(thread, NULL);

    }

}