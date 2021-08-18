#include<stdio.h>
int main() {
	char a, b;
	printf("输入一个小写字母（a-z）:");
	a = getchar();
	b = a - 32;
	printf("大写字母为:%c\n其ASCII值为:%d",b,b);
	
	return 0;

}