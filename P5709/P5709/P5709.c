#include<stdio.h>
int main() {
	double m, t, s, a;
	printf("输入m,t,s:");
	scanf_s("%lf%lf%lf",&m,&t,&s);
	a = (m * t - s) / t;
	printf("她还有%.0lf个完整的苹果",a);

	return 0;


	/*P5709 【深基2.习6】Apples Prologue
		题目描述
		八尾勇喜欢吃苹果。她现在有 m(m\le 100)m(m≤100) 个苹果，
		吃完一个苹果需要花费 t(0 \le t \le100)t(0≤t≤100) 分钟，吃完一个后立刻开始吃下一个。
		现在时间过去了 s(s\le 10000)s(s≤10000) 分钟，请问她还有几个完整的苹果？

		输入格式
		输入三个非负整数表示 m 、t 和 s。

		输出格式
		输出一个整数表示答案。

		如果你出现了 RE，不如检查一下被零除？*/

}