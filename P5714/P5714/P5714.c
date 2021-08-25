#include<stdio.h>
int main() 
{
	float m = 0;
	float h = 0;
	float bmi = 0;
	scanf_s("%f %f", &m, &h);
	bmi = m / (h * h);
	if (bmi < 18.5)
	{
		printf("Underweight");
	}
	else if (bmi > 18.5 && bmi < 24)
	{
		printf("Normal");
	}
	else
		printf("%.6g\nOverweight",bmi);//这个.g就很神奇

	return 0;
}