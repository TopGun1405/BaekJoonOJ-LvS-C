#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, num, t = 0;

	scanf("%d", &N);

	num = N;
	while (1) {
		num = (num % 10) * 10 + ((num / 10 + num % 10) % 10);
		t += 1;
		if (num == N) break;
	}
	printf("%d\n", t);

	return 0;
}