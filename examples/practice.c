#include <stdio.h>
#include <stdlib.h>

int* sorted;

void merge(int a[], int left, int right) {

	int mid = (left + right) / 2;
	int i = left;
	int j = mid + 1;

	//int a[8] = { 1,3,5,7,2,4,6,8 };
	//             0 1 2 3 4 5 6 7 
	while (i <= right) {

		if (left > mid && j <= right) {
			sorted[i] = a[j];
			j++;
			i++;

		}
		else if (j > right) {
			sorted[i] = a[left];
			left++;
			i++;

		}
		else {
			if (a[left] < a[j]) {
				sorted[i++] = a[left];
				left++;

			}
			else if (a[left] > a[j]) {
				sorted[i++] = a[j];
				j++;

			}
		}

	}

	for (int k = 0; k <= right; k++) {

		a[k] = sorted[k];

	}

}

void divide(int arr[], int left, int right) {

	int mid = (left + right) / 2;

	if (left == right) {
		return;
	}
	//int a[8] = { 1,3,5,7,2,4,6,8 };
	//             0 1 2 3 4 5 6 7 
	// divide(a, 0, 7);
	for () {
			
	}


	divide(arr, left, mid);
	divide(arr, mid + 1, right);
	merge(arr, left, right);
	
	//						(0, 7)
	//1.           (0, 3)             (4, 7)
	//2.     (0, 1)      (2, 3)      (4, 5)  (6, 7)   
	//3. (0, 0) (1, 1) 

}


int main() {
	int N;
	scanf_s("%d", &N);

	int a[1000000];
	sorted = malloc(4 * N);

	for (int i = 0; i < N; i++) {
		int n;
		scanf_s("%d", &n);
		a[i] = n;

	}
	divide(a, 0, N - 1);

	for (int b = 0; b < N; b++) {
		printf("%d ", a[b]);
	}

	return 0;

}