#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main() 
{
	int need, everypack, price, totalprice, min=0;
	scanf_s("%d", &need);
	for (int i = 0; i < 3; i++) 
	{
		scanf_s("%d %d", &everypack, &price);
		if (need % everypack == 0)
		{
			totalprice = (need / everypack)* price;
		}
		else
			totalprice = (need / everypack + 1) * price;
		if (min > totalprice|| min == 0 ) 
		{
			min = totalprice;
		}
	}
	printf("%d", min);

	return 0;
}