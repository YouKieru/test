#include<stdio.h>
void paixu(int arr[3],int sz) 
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < sz - 1; i++) 
	{
		int count = 0;
		for (j = 0; j < sz - 1 - i; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				count++;
			}
		}
		if (count == 0)
			break;
	}
}


int main() 
{
	int arr[3] = { 0 };
	scanf_s("%d %d %d", &arr[0], &arr[1], &arr[2]);
	int sz = sizeof(arr) / sizeof(arr[0]);
	paixu(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


