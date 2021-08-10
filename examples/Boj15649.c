#include<stdio.h>
#include<stdlib.h>





int main()
{
	int N; 
	int M;
	scanf_s("%d %d", &N, &M);
	
	int* arr = (int*)malloc(4*(N+1));

	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}
	
	for (int i = 1; i <= N; i++) {
		printf("%d ", i);
		for (int j = 1; j <= M-1; j++) {
			if (j != i) {
				printf("%d ", j);
			}
		}
	}
	
	



	return 0;
}