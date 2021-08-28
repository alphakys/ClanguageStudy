#include <stdio.h>

int main() {

	int N;

	scanf_s("%d", &N);

	if (N == 1) {
		printf("%d",N);
	}
	else if (N == 2) {
		printf("%d", N);
	}
	else {
		printf("%d", (N + 1) % 15746);
	}
	

	return 0;
}