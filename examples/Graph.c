#include<stdio.h>
#include<stdlib.h>





int main() {
	
	int size;
	scanf_s("%d", &size);
	
	int** arr = (int*)malloc(sizeof(int)*size);

	for (int i = 0; i < size; i++) {
		arr[i] = (int*)malloc(sizeof(int)*size);
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = i;
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}










