#include<stdlib.h>
#include<stdio.h>

#define SIZE 6


void addSingle(int **graph, int x, int y) {

	graph[x][y] = 1;
}

void addComplete(int **graph, int x, int y) {

	graph[x][y] = 1;
	graph[y][x] = 1;
}

void printfGraph(int **graph) {
	for (int i = 1; i <= SIZE; i++) {
		for (int j = 1; j <= SIZE; j++) {
			printf("%d, %d --> %d\n", i,j, graph[i][j]);
		}
	}
}


int main() {
	
	//int graph[SIZE + 1][SIZE + 1] = {0,};
	
	int **graph[SIZE+1];

	for (int i = 0; i < SIZE + 1; i++) {
		graph[i] = malloc(sizeof(int) * (SIZE + 1));
	}

	addComplete(graph, 1, 2);
	addComplete(graph, 1, 3);
	addComplete(graph, 2, 3);
	addComplete(graph, 2, 4);
	addComplete(graph, 3, 4);
	addComplete(graph, 3, 5);
	addComplete(graph, 4, 5);
	addComplete(graph, 4, 6);
	
	/*for (int i = 1; i <= SIZE; i++) {
		for (int j = 1; j <= SIZE; j++) {
			printf("%d, %d --> %d\n", i, j, graph[i][j]);
		}
	}*/


	printfGraph(graph);



	return 0;
}

/*int num[6][6] = {0,};

	for (int i = 0; i < SIZE + 1; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%d\n", num[i][j]);
		}
	}

	for (int i = 0; i < SIZE + 1; i++) {
		graph[i] = malloc(sizeof(int)*(SIZE+1));
	}

	

	for (int i = 0; i < 3; i++) {
		printf("%d", graph[i][i+1]);
	}*/