#include <stdio.h>

int main()
{
	char chars[4];
	short shorts[4];
	int integers[4];
	double doubles[4];
	printf("chars:\n");
	for(int i = 0 ; i < 4 ; i++)
	{
		printf("%p\n",&chars[i]);
	}
	printf("shorts:\n");
	for(int i = 0 ; i < 4 ; i++)
	{
		printf("%p\n",&shorts[i]);
	}
	printf("integers:\n");
	for(int i = 0 ; i < 4 ; i++)
	{
		printf("%p\n",&integers[i]);
	}
	printf("doubles:\n");
	for(int i = 0 ; i < 4 ; i++)
	{
		printf("%p\n",&doubles[i]);
	}
	return 0;
}
