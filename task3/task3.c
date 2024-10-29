#include <stdio.h>

#define PI 3.14159

int add(int,int);
float addf(float,float);
float areaOfCircle(int);
int areaOfRectangle(int,int);
int factorial(int);

int main()
{
	printf("add(1,2): %d\n",add(1,2));	
	printf("addf(1.2,2.1): %f\n",addf(1.2,2.1));	
	printf("areaOfCircle(4): %f\n",areaOfCircle(4));	
	printf("areaOfRectangle(4,6):%d\n",areaOfRectangle(4,6));
	printf("factorial(6):%d\n",factorial(6));	
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

float addf(float a, float b)
{
	return a + b;
}

float areaOfCircle(int radius)
{
	return radius * radius * PI;
}

int areaOfRectangle(int width, int height)
{
	return width * height;
}

int factorial(int n)
{
	if(n == 0)
	{
		return 1;
	}
	return n * factorial(n-1);
}
