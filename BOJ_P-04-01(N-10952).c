#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int A, B;

	while (1) {

		scanf("%d %d", &A, &B);
		if (A + B == 0)
			break;
		printf("%d\n", A + B);
	}

	return 0;
}