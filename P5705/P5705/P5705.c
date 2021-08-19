#include<stdio.h>
int main() {
	char a, b, c, d, e;
	printf("输入一个100-1000的数:\n");
	a= getchar();
	b= getchar();
	c= getchar();
	d= getchar();
	e= getchar();
	printf("%c%c%c%c%c",e,d,c,b,a);
	//关于这个小数点我现在属实想不出来什么好办法，没法在输入的时候固定这个小数点的位置
	//就比如我输入123.4如果是abcd四个字符变量就会输出..321，这个4就没变量赋
	//但如果我是现在这样abcde就必须打小数点，如果没打1234就是4321，而且输入12345就会是54321
	return 0;

}