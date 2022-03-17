#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

	if (A == B && B == C)
		printf("%d\n", 10000 + A * 1000);
	else if (A == B && B != C)
		printf("%d\n", 1000 + A * 100);
	else if (B == C && C != A)
		printf("%d\n", 1000 + B * 100);
	else if (C == A && A != B)
		printf("%d\n", 1000 + C * 100);
	else
		printf("%d\n", (((A > B) && (A > C)) ? A : ((B > C) && (B > A)) ? B : C) * 100);

	return 0;
}