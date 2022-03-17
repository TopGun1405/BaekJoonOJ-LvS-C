#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, min, max;
	int *num_array;

	scanf("%d", &N);
	
	num_array = (int*)calloc(N, sizeof(int));
	for (int i = 0; i < N; i++)
		scanf("%d", &num_array[i]);
	min = num_array[0], max = num_array[0];

	for (int i = 1; i < N; i++) {
		if (num_array[i] < min) min = num_array[i];
		if (num_array[i] > max) max = num_array[i];
	}

	printf("%d %d\n", min, max);

	return 0;
}