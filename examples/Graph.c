#include<stdio.h>
#include<stdlib.h>

#define SIZE 6

int arr[SIZE+1][SIZE+1] = {0,};





void addComplete(int x, int y, int weight) {

	arr[x][y] = weight;
	arr[y][x] = weight;
}

void addSingle(int x, int y, int weight) {
	arr[x][y] = weight;
}

void printGraph() {

	for (int i = 1; i < SIZE+1; i++) {
		for (int j = 1; j < SIZE+1; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}



int main() {
	
	int initSize;
	scanf_s("%d", &initSize);



	addComplete(1,2);
	addComplete(1, 3);
	addComplete(2, 3);
	addComplete(2, 4);
	addComplete(3, 4);
	addComplete(3, 5);
	addComplete(4, 5);
	addComplete(4, 6);

	printGraph();
	
	return 0;
}










