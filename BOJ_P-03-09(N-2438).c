#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;

	scanf("%d", &N);

	for (int n = 1; n <= N; n++) {
		for (int m = 0; m < n; m++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}