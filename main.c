#include <stdio.h>
#define SIZE 10

void assign_array(int arr[SIZE])
{
	arr[0] = 9;
	arr[1] = 8;
	arr[2] = 7;
	arr[3] = 6;
	arr[4] = 5;
	arr[5] = 4;
	arr[6] = 3;
	arr[7] = 2;
	arr[8] = 1;
	arr[9] = 0;

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

	assign_array(arr);
	print_array(arr);

	return 0;
}
