#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int sum(int n) {
	if (n <= 1)
		return 0;
	return n + sum(n - 1);
}
*/

int main() {

	int n, sum = 0;

	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++)
		sum += i;
	printf("%d\n", sum);

	return 0;
}