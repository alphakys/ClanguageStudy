#include<stdio.h>
#include<stdlib.h>
#include<math.h>	


int ww(int a, int b, int c) {

	if (a <= 0 || b <= 0 || c <= 0) {
		
		return 1;
	}
	else if (a > 20 || b > 20 || c > 20) {
		
		return 1048576;
	}
	else if (a < b && b < c && c < 20) {
		
		return ww(a, b, c - 1) + ww(a, b - 1, c - 1) - ww(a, b - 1, c);
	}
	else {
		
		return ww(a - 1, b, c) + ww(a - 1, b - 1, c) + ww(a - 1, b, c - 1) - ww(a - 1, b - 1, c - 1);
	}
}

#define height  5

int main() {
	int a, b, c;
	/*scanf_s("%d %d %d", &a, &b, &c);
	
	while (!(a==-1 && b==-1 && c==-1)) {
		
		printf("ww(%d, %d, %d) = %d\n", a, b, c, ww(a,b,c));
		
		scanf_s("%d %d %d", &a, &b, &c);
	}
	*/
	
	int width = 5;

	int **arr[height];

	for (int i = 0; i < height; i++) {
		arr[i] = malloc(4*width);
	}

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			arr[i][j] = malloc(4*5);
		}
	}



	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				arr[i][j][k] = ww(i, j, k);
				printf("%d,%d %d -> %d\n", i, j, k, arr[i][j][k]);
			}
		}
		
	}





	//W *arr = malloc(sizeof(W)*800);

	//printf("%d", sizeof(W));
	/*
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			for (int k = 1; k <= 5; k++) {
				setW(arr,i, j, k, w(i,j,k));
				printf("%d, %d, %d     %d\n", i, j, k, arr->result);
			}
		}	
	}

	
	free(arr);
	*/
	return 0;
}