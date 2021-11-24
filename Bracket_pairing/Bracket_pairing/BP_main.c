#define _CRT_SECURE_NO_WARNINGS 1
//�ж������Ƿ���ԣ��ɶ�true ���ɶ�false��ʹ����ջ
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
	char sym[] = "(uiui)[uu][i(o)]";//�����������ж��ַ���
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
