#include<stdio.h>
int main() {
	int n, s;
	printf("输入多边形顶点数:");
	scanf_s("%d",&n);
	s = n * (n - 1) * (n - 2) * (n - 3) / 24;
	printf("该多边形对角线交点数为:%d",s);

	return 0;


	/*P2181 对角线
		题目描述
		对于一个 nn 个顶点的凸多边形，它的任何三条对角线都不会交于一点。请求出图形中对角线交点的个数。

		输入格式
		输入只有一行一个整数 nn，代表边数。

		输出格式
		输出一行一个整数代表答案。*/

}