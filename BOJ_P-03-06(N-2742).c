#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;

	scanf("%d", &N);

	for (int n = N; n > 0; n--)
		printf("%d\n", n);

	return 0;
}