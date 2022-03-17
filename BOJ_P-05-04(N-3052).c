#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num_remainder[10], remainder_set[10];
	int low = 0, high = 9;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num_remainder[i]);
		num_remainder[i] = num_remainder[i] % 42;
	}
	// binary
	

	return 0;
}