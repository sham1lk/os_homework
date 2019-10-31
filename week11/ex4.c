#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int file =  open("./ex1.txt",  O_RDONLY, 0 );
	int file2 = open("./ex1.memcpy.txt",  O_RDWR,0 );

	struct stat st,st1;
	fstat(file, &st);
	fstat(file2,&st1);

	char* file_in_m = mmap(NULL,st.st_size,PROT_READ, MAP_SHARED, file,0);
	char* file2_in_m = mmap(NULL,st1.st_size,PROT_WRITE, MAP_SHARED, file2,0);
		ftruncate(file2,st.st_size);
	memcpy(file2_in_m,file_in_m,st.st_size);

	




}