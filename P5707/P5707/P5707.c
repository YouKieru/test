#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int s, v;
	scanf_s("%d %d", &s, &v);
	int t = 0;
	if (s % v == 0)
	{
		t = s / v + 10;
	}
	else
	{
		t = s / v + 11;
	}
	int h = 8;
	int m = 00;

	if (m - t % 60 < 0)
	{
		h--;
		m = m - (t % 60) + 60;
	}
	else
	{
		m = m - (t % 60);
	}

	if (h - t / 60 < 0)
	{
		h = h - (t / 60) + 24;
	}
	else
	{
		h = h - (t / 60);
	}

	printf("%02d:%02d", h, m);

	return 0;
}