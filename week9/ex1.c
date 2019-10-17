# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <unistd.h>
# include <string.h> 

int num_of_page_frames = 10;
int* mem;
char* age;
char constant = 128;//10000000
int miss=0,hit=0;
int find(int k)
{
	for (int i = 0; i < num_of_page_frames; ++i)
	{
		if(mem[i]==k)
			return i;
	}
	return -1;
}
int find_min(){
	char min = 255;
	int position;
	for (int i = 0; i < num_of_page_frames; ++i)
	{
		if(age[i]<min)
		{	
			min = age[i];
			position = i;

		}
	}
	return position;
}
void tik()
{
	for(int i = 0; i<num_of_page_frames;i++)
	{
		age[i]=age[i]>>1;
	}
}
int main()
{
	mem = malloc(sizeof(int)*num_of_page_frames);
	age = malloc(num_of_page_frames);
	FILE *file;
	file = fopen("input.txt", "r");
	int i=0;
	int k;

	while(fscanf (file, "%d",&k)!=EOF)
	{
		tik();
		int place = find(k);
		if(place>=0)
		{
			age[place]+=constant;
			hit++;
		}
		else
		if(i<num_of_page_frames)
		{
			mem[i]=k;
			age[i]=constant;
			i++;
			miss++;

		}
		else
		{
			int min = find_min();
			mem[min] = k;
			age[min]=constant;
			miss++;
		}



	}
	printf("%d/%d=%f\n",hit,miss,(double)hit/(double)miss);
}