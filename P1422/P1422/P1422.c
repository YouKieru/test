#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main() 
{
	double a = 0;
	double b = 0;
	scanf_s("%lf", &a);
	if (a <= 150) 
	{
		b = a * 0.4463;
	}
	if (a > 150 && a < 400) 
	{
		b += 150 * 0.4463 + (a - 150) * 0.4663;
	}
	if (a > 400) 
	{
		b = (150 * 0.4463) + (250 * 0.4663) + (a - 400) * 0.5663;
	}
	printf("%0.1lf", b);
	return 0;
}