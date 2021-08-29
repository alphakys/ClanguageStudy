#include <stdio.h>

int main() {

	int N;

	scanf_s("%d", &N);

	while (N!=-1) {
		if (N == 1) {
			printf("%d",N);
		}
		else if (N == 2) {
				printf("%d", N);
			}
		else {
			//È¦¼ö
			if (N % 2 != 0) {
				int q = N / 2;

				int a = q * (2 + ((q - 1) * 2));
				int b = a / 2;
				int c = b + 1;


				printf("%d\n", c);
			}
			else {
				//Â¦¼ö
				int qu = (N / 2) - 1;

				printf("%d\n", ((qu * (2 + (qu - 1) * 2)) / 2) + 2);
			}
		}
		scanf_s("%d", &N);
	}


	
	

	return 0;
}