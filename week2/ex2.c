#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	scanf ("%[^\n]%*c", string);//reading with spaces 
	int i = strlen(string);
	while(i!=-1){
		printf("%c",string[i]);
		i--;
	}

}