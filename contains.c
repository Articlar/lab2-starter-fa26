#include <stdio.h>

int contains(int item, int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == item) return 1;
	}
	return 0;
}

{
int main()
	int length = 20;
	int arr[20];
	for (int i = 0; i < length; i++)
	{
		arr[i] = i;
	}

	int result = contains(4, arr, length);

	printf("Result: %d\n", result);
	return 0;
}
