# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <unistd.h> 
# include <string.h>

size_t getsize(void * p) {
    size_t * in = p;
    if (in) { --in; return *in; }
    return -1;
}

void *myrealloc(void *ptr, int old_size, int new_size) {
    
    if (new_size == 0) {
        free(ptr);
        return NULL;
    }

    if (ptr == NULL) {
        
        return malloc(new_size);
    }

    void *new_ptr;
    new_ptr = malloc(new_size);
    memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
    free(ptr);

    return new_ptr;
}


int main()
{   
    int * a = malloc(sizeof(int)*5);
    for(int i =0;i<5;i++)
    {
    	a[i]=0;
    }
    a = myrealloc(a,sizeof(int)*5,sizeof(int)*6);
    a[5]=0;
    for(int i =0; i<6;i++)
    	printf("%d\n", a[i]);
    free(a);
}