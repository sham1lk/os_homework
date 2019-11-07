#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h> 
#include <string.h> 

int main(int argc, char *argv[])
 {

	int file = open("/dev/stdin", O_RDONLY, S_IRUSR);
	char buffer[9999];
	int a = 0;
	if(argc>1)
	if(strncmp(argv[1], "-a", 2) == 0)
	a = 1;
	char c;
	int k = 0;
	while(read(file,&c,1))
	for(int i =1+a; i<argc; i++)
	{
		int file1;
		if (a) {
        file1 = open(argv[i], O_WRONLY | O_CREAT | O_APPEND);
      	} 
      	else {
        file1 = open(argv[i], O_WRONLY | O_CREAT | O_TRUNC); 
        }
        write(file1, &c, 1);
        close(file1);
        a = 1;
	}
}