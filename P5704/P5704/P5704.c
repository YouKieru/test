#include<stdio.h>
int main() {
	char a, b;
	printf("����һ��Сд��ĸ��a-z��:");
	a = getchar();
	b = a - 32;
	printf("��д��ĸΪ:%c\n��ASCIIֵΪ:%d",b,b);
	
	return 0;

}