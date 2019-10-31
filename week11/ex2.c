#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{
	char* string = "Hello";

	for(int i=0;i<strlen(string);i++)
	{
		printf("%c",string[i]);
		sleep(1);
	}
}