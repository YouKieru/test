#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c, p, S;
	printf("输入三角形的三条边长：");
	scanf_s("%lf%lf%lf",&a,&b,&c);
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("三角形的面积为:%.1lf。",S);

	return 0;







}