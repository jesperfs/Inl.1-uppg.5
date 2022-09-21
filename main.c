#include <stdio.h>

void assign_array(int arr[10], const int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = size - 1 - i;
	}

	return;
}

void print_array(int arr[10], const int size)
{
	printf("Number of elements : %d\n", size);

	printf("-----------------------------------------------------------------------------------------------\n");

	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", arr[i]);
	}

	printf("-----------------------------------------------------------------------------------------------\n");

	return;
}

int main(void)
{
	int arr[10];

	assign_array(arr, 10);
	print_array(arr, 10);

	return 0;
}
