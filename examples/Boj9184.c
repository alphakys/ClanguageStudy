#include<stdio.h>
#include<stdlib.h>
#include<math.h>	

int w(int a, int b, int c) {
	
	if (a <= 0 || b <= 0 || c <= 0) {
		//printf("1번\n");
		return 1;
	}
	else if (a < b && b < c && c< 20) {
		//printf("2번\n");
		return pow((double)2, (double)a);
	}else if (a > 20 || b > 20 || c > 20) {
		//printf("3번\n");
		return 1048576;
	}
	else if (a == b == c) {
		//printf("4번\n");
		return pow((double)2, (double)a);
	}
	else {
		//printf("5번\n");
		return w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	}
}


int ww(int a, int b, int c) {

	if (a <= 0 || b <= 0 || c <= 0) {
		printf("1번\n");
		return 1;
	}
	else if (a > 20 || b > 20 || c > 20) {
		printf("2번\n");
		return 1048576;
	}
	else if (a < b && b < c && c < 20) {
		//printf("3번\n");
		return pow((double)2, (double)a);
	}
	else {
		//printf("4번\n");
		return w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	}
}

typedef struct {
	int A;
	int B;
	int C;
	int result;
}W;

void setW(W *st, int a, int b, int c, int value) {

	st->A = a;
	st->B = b;
	st->C = c;
	st->result = value;
}

void printW(int a, int b, int c) {

}




int main() {
	int a, b, c;
	/*scanf_s("%d %d %d", &a, &b, &c);
	
	while (!(a==-1 && b==-1 && c==-1)) {
		
		printf("w(%d, %d, %d) = %d\n", a, b, c, w1(a,b,c));
		scanf_s("%d %d %d", &a, &b, &c);
	}
	*/
	W *arr = malloc(sizeof(W)*800);

	//printf("%d", sizeof(W));

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			for (int k = 1; k <= 5; k++) {
				setW(arr,i, j, k, w(i,j,k));
				printf("%d, %d, %d     %d\n", i, j, k, arr->result);
			}
		}	
	}

	
	free(arr);

	return 0;
}