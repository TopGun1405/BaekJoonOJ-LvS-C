#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num[9], max, index = 0;

	for (int i = 0; i < 9; i++)
		scanf("%d", &num[i]);

	max = num[0];
	for (int i = 1; i < 9; i++)
		if (num[i] > max) {
			max = num[i];
			index = i;
		}

	printf("%d\n%d", max, index + 1);

	return 0;
}