#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ShowArray(int* array);
void BubbleSort(int* array);
void SelectSort(int* array);

int main()
{
	srand((unsigned)time(NULL));
	rand();

	int arr[10];
	int select = 0;

	

	while (true)
	{
		ShowArray(arr);

		printf("1. BubbleFilter, 2. SelectFilter, 3. Exit\n");
		printf("원하는 필터 : ");
		scanf_s("%d", &select);

		switch (select)
		{
		case 1:
			{
			BubbleSort(arr);
			break;
			}
		case 2:
			{
			SelectSort(arr);
			break;
			}
		case 3:
			exit(0);
			break;
		}
	}

	return 0;
}

void ShowArray(int* array)
{
	printf("처음 배열 : \n");
	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 10 + 1;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				i--;
				break;
			}
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", array[i]);
	}

	printf("\n\n");
}

void BubbleSort(int* array)
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
		for (int k = 0; k < 10; k++)
		{
			printf("%d\t", array[k]);
		}
		printf("\n");
	}

	printf("\n\n");
}

void SelectSort(int* array)
{
	for (int i = 0; i < 10; i++)
	{
		int minimum = 10000;
		int min_index = 0;

		for (int j = i; j < 10; j++)
		{
			if (array[j] < minimum)
			{
				minimum = array[j];
				min_index = j;
			}
		}
		int temp = array[min_index];
		array[min_index] = array[i];
		array[i] = temp;

		for (int k = 0; k < 10; k++)
		{
			printf("%d\t", array[k]);
		}
		printf("\n");
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", array[i]);
	}

	printf("\n\n");
}
