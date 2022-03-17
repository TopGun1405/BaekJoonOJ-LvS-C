#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int another_sol(int A, int B) {

	int H = B / 100;
	int T = B % 100 / 10;
	int U = B % 10;

	printf("%d\n", A * U);
	printf("%d\n", A * T);
	printf("%d\n", A * H);
	printf("%d\n", A * B);
}

int main() {

	int A, B;
	char C[4];

	scanf("%d %d", &A, &B);
	
	sprintf(C, "%d", B);
	printf("%d\n", A * (int)(C[2] - '0'));
	printf("%d\n", A * (int)(C[1] - '0'));
	printf("%d\n", A * (int)(C[0] - '0'));
	printf("%d\n\n", A * B);

	another_sol(A, B);
	return 0;
}