#include <stdio.h>
#include <string.h>


void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{ 
    int a;
    int b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a,b);
}