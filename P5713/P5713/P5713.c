#include<stdio.h>

int local(int date) 
{
	return 5 * date;
}
int luogu(int date) 
{
	return 3 * date + 11;
}


int main() 
{
	int date = 0;
	scanf_s("%d", &date);
	if (local(date) < luogu(date)) 
	{
		printf("Local");
	}
	else 
	{
		printf("Luogu");
	}
	return 0;
}
	