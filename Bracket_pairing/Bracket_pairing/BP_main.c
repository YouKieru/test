#define _CRT_SECURE_NO_WARNINGS 1
//判断括号是否配对，成对true 不成对false，使用了栈
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#define Maxsize 50

typedef struct sq {
	char a[Maxsize];
	int top;
}a_sqstack;

void Initstack(a_sqstack* Q) {
	Q->top = -1;
}

bool Enstack(a_sqstack* Q, char x) {
	if (Q->top == Maxsize - 1)
		return false;
	Q->a[++Q->top] = x;
	return true;
}

int Destack(a_sqstack* Q, char* x) {
	if (Q->top == -1)
		return 0;
	*x = Q->a[Q->top--];
	return 1;
}

int main()
{
	a_sqstack arr;
	Initstack(&arr);
	char sym[] = "(uiui)[uu][i(o)]";//在这里输入判断字符串
	int i = 0;
	while (i != strlen(sym)) {
		if (sym[i] == '(' || sym[i] == '[')
			Enstack(&arr, sym[i]);
		if (sym[i] == ')' || sym[i] == ']') {
			char c;
			if (!Destack(&arr, &c)) {
				printf("false");
				return 0;
			}
			if ((c == '(' && sym[i] == ']') || (c == '[' && sym[i] == ')')) {
				printf("false");
				return 0;
			}
		}
		i++;

	}//while

	printf("true");
	return 0;
}
