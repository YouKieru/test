#include <stdio.h>
int oushu(int shuru) 
{
	//�ж�ż����1����0
	if (shuru % 2 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int sishier(int shuru) 
{
	if (shuru > 4 && shuru <= 12)
	{
		return 1;
	}
	else
		return 0;
}



int main() 
{
	int shuru = 0;
	scanf_s("%d", &shuru);
	int a = oushu(shuru);
	int b = sishier(shuru);
	int aa = 0;
	int bb = 0;
	int cc = 0;
	int dd = 0;
	if (a + b == 2)//СA
		aa = 1;
	if (a + b == 1 || a + b == 2)//Uim
		bb = 1;
	if (a + b == 1)//��β��
		cc = 1;
	if (a + b == 0)//����
		dd = 1;
	printf("%d %d %d %d", aa, bb, cc, dd);
	return 0;


}