#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, X, A;

	scanf("%d %d", &N, &X);

	for (int n = 0; n < N; n++) {
		scanf("%d", &A);

		if (A < X) printf("%d ", A);
	}

	return 0;
}