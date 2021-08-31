#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() 
{
	int x, n, i, s = 0;
	scanf_s("%d %d", &x, &n);
	for (i = 0; i < n; i++) 
	{
		if (x > 7)
			x = 1;
		if (x >= 1 && x <= 5) 
		{
			s = s + 250;
		}
		x++;
	}
	printf("%d", s);

	return 0;
}