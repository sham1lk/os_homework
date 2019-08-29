#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	int a;
	float b;
	double c;

	a = INT_MAX;
	b = FLT_MAX;
	c = DBL_MAX;

	printf("int max value: %d, int size: %d\n", a, sizeof(a));
	printf("float max value:%f, float size: %d\n", b, sizeof(b));
	printf("double max value:%f, double size: %d\n", c, sizeof(c));


}