#include <stdio.h>
#include <stdlib.h>

void merge(int *a[], int left, int right) {
	
	int* sorted = (int*)malloc(4*(right-left+1));
	int mid = (left+right)/2;
	int i = left;
	int j = mid + 1; 
	//sorted�� �ε���
	int k = left; // (1,2,3,4)
				  //  0 1 2 3
				  //  (4,3,2,1)
				  //   0 1 2 3
	//int a[8] = { 1,3,5,7,2,4,6,8 };
	//             0 1 2 3 4 5 6 7 
	while (i<=mid && j<=right) {
	
		if (a[i] < a[j]) {
			sorted[k++] = a[i];
			i++;
			//printf("1��\n");
		}
		else {
			sorted[k++] = a[j];
			j++;
			//printf("2��\n");
		}
	}

	//printf("3��\n");
	while (j<=right) {
		sorted[k] = a[j];
		j++;
		k++;
			
	}
		
	//printf("4��\n");
	while (i <= mid) {
		sorted[k] = a[i];
		i++;
		k++;
	}
		
	
	
	for (int q = left; q <= right; q++) {

		a[q] = sorted[q];
		//printf("%d ", a[q]);
	}
	free(sorted);
	//printf("\n");
}

void merge_sort(int *arr[], int left, int right) {
	
	if (left < right) {
		int mid = (right + left) / 2;
		merge_sort(arr, left, mid);

		merge_sort(arr, mid + 1, right);

		merge(arr, left, right);
	}
	
	//						(0, 7)
	//1.           (0, 3)             (4, 7)
	//2.     (0, 1)      (2, 3)      (4, 5)  (6, 7)   
	//3. (0, 0) (1, 1) 

}


int main() {
	int N;
	scanf_s("%d",&N);

	int *a = (int*)malloc(sizeof(int)*N);

	for (int i = 0; i < N; i++) {
		
		scanf("%d", a[i]);
		printf("%d",a[i]);
	}
	merge_sort(a, 0, N-1);
	
	for (int b = 0; b < N; b++) {
		printf("%d\n", a[b]);
	}
	
	free(a);
	return 0;

}