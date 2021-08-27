#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() 
{
	char arr[14] = "0";
	char right[12] = "0123456789X";
	int sum = 0;
	scanf_s("%s", arr, 14);
	int count = 1;
	for (int i = 0; i < 11; i++) 
	{
		if (arr[i] == '-')
			continue;
		sum += (arr[i] - '0') * count++;
	}

	if (right[sum % 11] == arr[12])
		printf("Right");
	else
	{
		arr[12] = right[sum % 11];
		printf("%s", arr);
	}
	return 0;
}