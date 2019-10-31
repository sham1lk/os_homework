#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>  

int main()
{
	int file =  open("./ex1.txt",  O_RDWR );
	char buffer[9999] ="This is a nice day!";

	struct stat st;
	fstat(file, &st);
	size_t fsize = (size_t)st.st_size;

	char* file_in_m = mmap(NULL,fsize,PROT_WRITE, MAP_SHARED, file,0);
	
	ftruncate(file,19);
	for(int i = 0;i<19;i++)
	{
		file_in_m[i]=buffer[i];
	}




}