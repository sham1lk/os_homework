#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>

int I_nums[10000];

int find(int k, int inum)
	{
		for (int i = 0; i < k; ++i)
		{
			if(I_nums[i] == inum)
				return 1;
		}
		return 0;
	} 

int main()
{

	DIR *dir;
	int A[100];
    struct dirent *entry;

    dir = opendir("./tmp");
    
    int i =0;
    int k = 0;
    while ( (entry = readdir(dir)) != NULL) {
        if(find(i,entry->d_ino)==1)
        {
        	A[k]=entry->d_ino;
        	k++;
            }
        else
        {

        	I_nums[i]=entry->d_ino;
        	i++;
        }

    }
    closedir(dir);
    dir = opendir("./tmp");
    
    for(int b = 0;b<k;b++)
    {
    	printf("%d ", A[b]);
    	while ( (entry = readdir(dir)) != NULL)
    		if(entry->d_ino==A[b])
    			printf("%s ", entry->d_name);
    	printf("\n");
    }

    

}