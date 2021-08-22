#include<stdio.h>
int main() 
{
	int apple = 0;
	scanf_s("%d", &apple);
	if (apple < 2)
		printf("Today, I ate %d apple.", apple);
	else
		printf("Today, I ate %d apples.", apple);
}