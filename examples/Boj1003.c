#include <stdio.h>

void main() 
{
	int N;
	scanf_s("%d", &N);
	
	int a = 0, b = 1;

	for (int i = 0; i < N; i++) {
		int n;
		scanf_s("%d", &n);
		
		for (int i = 0; i < n; i++) {
			a += b;
			b = a - b;
		}
	}

	// 0 = (0,1)
	// 1 = (1,0)
	// 2 = (1,1)
	// 3 = (2,1)
	// 4 = (3,2)
	// 5 = (5,3)
	// a +=b;
	// b = a-b




}