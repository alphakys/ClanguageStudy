#include<stdio.h>	
#include<math.h>	

int w(int a, int b, int c) {
	
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	else if (a < b && b < c) {
		return pow((double)2, (double)a);
	}else if (a > 20 || b > 20 || c > 20) {
		return 1048576;
	}
	else if (a == b == c) {
		return pow((double)2, (double)a);
	}
	else {
		return w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	}
}

int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	
	while (!(a==-1 && b==-1 && c==-1)) {
		
		printf("w(%d, %d, %d) = %d\n", a, b, c, w(a,b,c));
		scanf_s("%d %d %d", &a, &b, &c);
	}
	/*
	if (a < b && b < c) {
		printf("%d", pow((double)2, (double)a));
	}
	else {
		printf("%d", pow((double)2, (double)a));
	}
	*/

	



	
	return 0;
}