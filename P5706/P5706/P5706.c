#include<stdio.h>
int main() {
	int n;
	float l, t;
	scanf_s("%f%d",&t,&n);
	l = t / n;
	printf("每个人可以获得%.3f毫升饮料\n共使用杯子%d个",l,n*2);

	return 0;

}