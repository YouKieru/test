#include <stdio.h>

int runyear(int year) 
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}

int main() 
{
	int year = 0;
	scanf_s("%d", &year);
	printf("%d", runyear(year));
}