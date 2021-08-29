#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int leapyear(int year) 
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}

int main() 
{
	int year, yue;
	scanf_s("%d %d", &year, &yue);
	if (yue == 1 || yue == 3 || yue == 5 || yue == 7 || yue == 8 || yue == 10 || yue == 12) 
	{
		printf("31");
	}
	else if(yue == 4 || yue == 6 || yue == 9 || yue == 11 )
	{
		printf("30");
	}
	else 
	{
		if (leapyear(year))
		{
			printf("29");
		}
		else
			printf("28");
	}

	return 0;
}