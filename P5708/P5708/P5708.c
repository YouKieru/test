#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c, p, S;
	printf("���������ε������߳���");
	scanf_s("%lf%lf%lf",&a,&b,&c);
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("�����ε����Ϊ:%.1lf��",S);

	return 0;







}