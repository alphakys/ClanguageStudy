#include <stdio.h>

void bubbleSort(int arr[])
{
	int temp;
	// 9 8 7 5 4
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d : %d ::: %d \n", (*arr), *(arr + 1), (*arr) > *(arr + 1));
			if (*arr > *(arr + 1))
			{
				temp = *arr;
				*arr = *(arr + 1);
				*(arr + 1) = temp;
			}
			*arr++;
		}
	}

}

int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}


	bubbleSort(arr);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}