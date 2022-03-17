#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int T, A, B;

	scanf("%d", &T);

	for (int t = 0; t < T; t++) {
		scanf("%d %d", &A, &B);

		printf("%d\n", A + B);
	}

	return 0;
}