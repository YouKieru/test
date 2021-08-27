#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int a, s, max = 0, sum = 0, day = 0;
	for (int i = 1; i < 8; i++) 
	{
		scanf_s("%d %d", &a, &s);
		sum = a + s;
		if (sum > max && sum >= 8) 
		{
			max = sum;
			day = i;
		}
	}
	printf("%d", day);

	return 0;
}