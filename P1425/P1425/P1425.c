#include<stdio.h>
int main() {
	int a, b, c, d, e, f;
	scanf_s("%d%d%d%d",&a,&b,&c,&d);
	if (d < b) {
		e = c - 1 - a;
		f = d + 60 - b;
	}
	else {
		e = c - a;
		f = d - b;
	}
	printf("С������һ������%d:%d",e,f);
	
	return 0;

}