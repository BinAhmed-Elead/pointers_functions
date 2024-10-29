#include <stdio.h>


int main()
{
	short a = 0x1020;
	char *ptr = &a;
	printf("a : 0x%x\n",a);
	printf("%p: 0x%x\n",ptr,*ptr);
	printf("%p: 0x%x\n",ptr+1,*(ptr+1));
	if(*ptr == 0x20)
	{
		printf("System is little Endian\n");
	}else
	{
		printf("System is Big Endian\n");
	}
	return 0;
}
