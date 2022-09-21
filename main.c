#include <stdio.h>
#define SIZE 10

void assign_array(int arr[SIZE], int i)
{
	for (int i = 0; i < SIZE; ++i)
	{
		arr[i] = SIZE - 1 - i;
	}

	return;
}

void print_array(int arr[SIZE])
{
	printf("Number of elements : %d\n", SIZE);

	printf("-----------------------------------------------------------------------------------------------\n");

	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\n", arr[i]);
	}

	printf("-----------------------------------------------------------------------------------------------\n");

	return;
}

int main(void)
{
	int arr[SIZE];
	int i = 0;

	assign_array(arr, i);
	print_array(arr);

	return 0;
}
