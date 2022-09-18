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

void print_array(static int arr[SIZE], static int i)
{
	printf("-----------------------------------------------------------------------------------------------\n");

	printf("Number of elements : %d\n", SIZE);

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", arr[i]);
	}

	printf("-----------------------------------------------------------------------------------------------\n");

	return;
}

int main(void)
{
	static int arr[SIZE];
	int i = 0;

	assign_array(arr);
	print_array(arr, i);

	return 0;
}
