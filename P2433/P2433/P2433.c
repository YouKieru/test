#include<stdio.h>
#include<math.h>
int main() {
	printf("������Ҫѡ����ţ�");
	int T;
	scanf_s("%d", &T);

	if (T == 1) {
		printf("I love Luogu!");

		/*���� 1
			����� I love Luogu!*/

	}
	else if (T == 2) {
		int A, Uim, B;
		A   = 2;
		Uim = 4;
		B = 10 - A - Uim;
		printf("1.СA �� Uim ������һ������%dƻ����\n""2.��β��������%dƻ����",A+ Uim,B);

		/*���� 2
			������ 10 ��ƻ����СA ������ 2 ����Uim ������ 4 ������β������ʣ�µ����е�ƻ����������֪����
			СA �� Uim ������һ�����߶���ƻ����
			��β�������߶���ƻ����
			������Ҫ��дһ�������������������Ϊ�𰸣��м�ʹ�ÿո�ֿ���*/

	}
	else if (T == 3) {
		int a, b, c;
		a = 14;
		b = 4;
		c = a % b;
		printf("1.ÿλͬѧ�ֵܷ�%d��ƻ����\n2.һ���ֳ�ȥ%d��ƻ����\n3.��%d��ƻ���Żر��䡣",a/b,a-c,c);

		/*���� 3
			������ 14 ��ƻ����Ҫ���ָ� 4 ��ͬѧ���ֲ�����ƻ���Żر��䡣���ʣ�
			ÿλͬѧ�ֵܷü���ƻ����
			һ���ֳ�ȥ����ƻ����
			�Ѽ���ƻ���Żر��䣿
			������Ҫ��дһ�������������������Ϊ�𰸣�ÿ������һ�С�*/

	}
	else if (T == 4) {
		float a, b;
		a = 500;
		b = 3;
		printf("ÿλͬѧ���Էֵ�%.3f������",a/b);

		/*���� 4
			������ 500 �����ķ�լ����ˮ��Ҫ���ָ� 3 ��ͬѧ��ÿλͬѧ���Էֵ����ٺ�����
			�����һ��������Ϊ��������� 6 λ��Ч���֣��Ҳ�ʹ�ÿ�ѧ��������*/

	}
	else if (T == 5) {
		int a, b, c, d, e;
		a = 260;
		b = 12;
		c = 220;
		d = 20;
		e = (a + c) / (b + d);
		printf("%d���������β���롣",e);

		/*���� 5
			���л𳵳� 260 �ף�ÿ���� 12 �ף����л𳵳� 220 �ף�ÿ���� 20 �ף�����������У�
			��������ͷ����ʱ��ʼ��ʱ���೤ʱ���������β���룿��֪����������*/

	}
	else if (T == 6) {
		double a, b, c;
		a = 6;
		b = 9;
		c = sqrt(a*a+b*b);
		printf("�Խ��߳���Ϊ:%lf��",c);
		
		//���� 6
		//һ�������γ����ֱ��� 6cm��9cm�������ĶԽ��߳��ȣ�cm����ֱ��ʹ�� cout �����

	}
	else if (T == 7) {
		int a, b, c;
		a = 100;
		a = a + 10;
		printf("ʣ�����Ϊ:%d��\n", a);
		a = a - 20;
		printf("ʣ�����Ϊ:%d��\n", a);
		a = a - a;
		printf("ʣ�����Ϊ:%d��\n", a);

		/*���� 7
		Uim �����˻�������100Ԫ������������Ĳ�����
			��������� 10 Ԫ��
			���ﻨ���� 20 Ԫ��
			�������Ǯȫ��ȡ����
			����ÿ�β���������˻�����ʹ�û��з�������*/

	}
	else if (T == 8) {
		double r, D, S, V, pi;
		r = 4;
		pi = 3.141593;
		D = pi * r * 2;
		S = pi * r * r;
		V = (4 / 3) * pi * r * r * r;
		printf("�ܳ�:%lf\n���:%lf\n���:%lf��\n",D,S,V);

		/*���� 8
			���뾶Ϊ r = 5�������Բ���ܳ���������������ȡ �� = 3.141593����ֱ��ʹ�� cout ����𰸣�ÿ��һ�����֡�*/

	}
	else if (T == 9) {
	    int a, i;
		a = 1;
		i = 1;
		while (i <= 4) {
			a = (a + 1) * 2;
			i = i + 1;
		}
		printf("С������%d�����ӡ�",a);

		/*���� 9
			һֻС���������ɸ����ӡ���һ�����պó�����Щ���ӵ�һ�룬��̰������һ����
			�ڶ�����Ҳ�պó���ʣ�����ӵ�һ�룬̰������һ����
			���������ָպó���ʣ�µ����ӵ�һ�룬��̰������һ����
			����������һ������������ֻʣ��һ���ˡ�����С�����˼������ӣ�*/

	}
	else if (T == 10) {
	    float a, b, c;//a��ʾԭ�еĹ�������b��ʾÿ���ӻ����ӵĹ�����,c��ʾ����
		b = ((30.0 * 8.0) - (6.0 * 10.0)) / (30.0 - 6.0);
		a = (30.0 * 8.0) - (30.0 * b);
		c = (a / 10.0) + b;
		printf("%.1f %.1f\n", a,b);
		printf("%.0f̨����������� 10 ����ʱ�պð���������еĳ���������ϡ�",c);

		/*���� 10
			��ȵ����������ǵ�λʱ���ھ������ӵġ�
			8 ̨����� 30 ���ӿ��Ըպð���������еĳ���������ϣ�
			10 ̨����� 6 ���ӿ��Ըպð���������еĳ���������ϣ�
			���ʼ�̨����������� 10 ����ʱ�պð���������еĳ���������ϣ�*/

	}
	else if (T == 11) {
	 float a, b, c;
	 a = 5;
	 b = 8;
	 c = 100 / (b - a);
	 printf("��Ҫ%.1f���β�¿���׷��СA��",c);

	 /*���� 11
		 СA�ܲ��ٶ� 5m / s����β���ܲ��ٶ� 8m / s��
		 ��β����СA���� 100m������ͬʱ���ܣ�������Ҫ�೤ʱ���β�¿���׷��СA��
		 ���һ�����ֱ�ʾ�𰸣�ʹ�� cout ֱ�������*/

	}
	else if (T == 12) {
	 int a = 'A';
	 int m = 'M';
	 printf("1.M ����ĸ���еĵ�%d����ĸ��\n2.�� 18 ����ĸ��%c��",m-a+1, a - 1 + 18);

	 /*���� 12
		��Ҷ�֪���� 26 ��Ӣ����ĸ������A�ǵ�һ����ĸ���������������

		1.M ����ĸ���еĵڼ�����ĸ��
		2.�� 18 ����ĸ��ʲô��
		���һ�����ֺ�һ����ĸ��ʹ�û��и�����*/

	}
	else if (T == 13) {
	 double r, R, V, pi, L;
	 r = 4;
	 R = 10;
	 pi = 3.141593;
	 V = 4/3*(pow(r, 3) + pow(R, 3));
	 L = pow(V,1/3);
	 printf("�����������ⳤ��%.1lfcm��",L);

	 /* ���� 13
		С A ������������Ƥ�࣬һ���뾶�� 4��һ���뾶�� 10��
		�������������Ƥ������һ��Ȼ�������һ�������壬���������������ⳤ�Ƕ��٣�
		��������������������ȥС����֮������֡�ȡ \pi = 3.141593�� = 3.141593��*/

	}
	else if (T == 14) {
	 double a, b, c, d, X1, X2;
	 printf("����һԪ���η���aX^2+bX+c=0��abc:");
	 scanf_s("%lf%lf%lf",&a,&b,&c);
	 d = pow(b, 2) - (4 * a * c);
	 X1 = (-b + sqrt(d)) / (2 * a);
	 X2 = (-b - sqrt(d)) / (2 * a);
	 if (d>0) {
		 if (X1<X2) {
			 printf("X1=%.1lf\nX2=%.1lf", X1, X2);
		 }
		 else {
			 printf("X1=%.1lf\nX2=%.1lf", X2, X1);
		 }
	 }
	 else if(d<0){
		 printf("�÷���û��ʵ������");
	 
	 }
	 else {
		 printf("X1=X2=%.1lf��", X1);
	 }

	 /* ���� 14
		���ݹ�����У��Ԥ�⣬���γ̶���Ϊ 110 Ԫʱ������ 10 �˱�����
		����γ̼۸�ÿ���� 1 Ԫ���ͻ�� 1 �������ߣ���֮��Ȼ����
		���ϣ���ܹ����յ� 3500 Ԫѧ�ѵĻ�����ôӦ�ö��۶����أ�
		��֪�����������𰸷���Ҫ����ȡ��С����һ�����������𰸲��������������������뾫ȷ��������*/

	}

	return 0;

}

