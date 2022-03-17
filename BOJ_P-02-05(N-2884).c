#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int H, M;

	scanf("%d %d", &H, &M);

	if (M - 45 >= 0)
		printf("%d %d", H, M - 45);
	else 
		if (H - 1 == -1)
			printf("%d %d", H + 23, 60 - (45 - M));
		else
			printf("%d %d", H - 1, 60 - (45 - M));

	return 0;
}