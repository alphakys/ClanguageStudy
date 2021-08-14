#include<stdio.h>
#include<stdlib.h>



int main() {
	
	
	int* height;
	height = (int*)malloc(4); 
	
	scanf_s("%d", height);
	int* width;
	
	width = (int*)malloc(4);
	scanf_s("%d", width);
	
	int** arr = (int**)malloc(*height * 4);
	/*
	int i = 0;
	printf("%d\n", &i);

	arr[0] = &i;
	printf("%d\n", arr[0]);
	printf("%d\n", *arr[0]);
	printf("%d\n", &arr[0]);

	for (int i = 0; i < *height; i++) {
		printf("%d\n", arr[i]);
	}
	*/

	
	for (int i = 0; i < *height; i++) {
		arr[i] = (int*)malloc(*width * 4);
	}
	
	for (int i = 0; i < (*height)+1; i++) {
		for (int j = 0; j < (*width)+1; j++) {
			printf("(%d,%d) : %d\n",i, j, &arr[i][j]);
		}
	}
	



	
	return 0;
}










