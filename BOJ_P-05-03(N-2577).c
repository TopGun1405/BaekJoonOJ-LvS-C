#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int A, B, C, mult_num = 0;
	int element_num[10] = { 0, };

	scanf("%d %d %d", &A, &B, &C);
	mult_num = A * B * C;

	for (int i = 0; mult_num > 0; i++) {
		element_num[mult_num % 10] ++;
		mult_num /= 10;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", element_num[i]);

	return 0;
}