#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int A, B, C;

	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	if ((B + C) / 60 == 0)
		printf("%d %d\n", A, B + C);
	else
		if (A + ((B + C) / 60) < 24)
			printf("%d %d\n", A + ((B + C) / 60), (B + C) % 60);
		else
			printf("%d %d\n", A + ((B + C) / 60) - 24, (B + C) % 60);

	return 0;
}