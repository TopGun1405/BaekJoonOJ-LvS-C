#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;

	scanf("%d", &N);

	for (int n = 1; n < 10; n++)
		printf("%d * %d = %d\n", N, n, N * n);

	return 0;
}