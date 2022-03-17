#include <stdio.h>

int main() {

	int A, B;

	scanf_s("%d %d", &A, &B);

	printf("%.10f\n", (double)A / (double)B);
	// 실제 정답과 출력값의 절대오차 또는 상대오차가 10^-9 이하이면 정답이기 때문에 %.10

	return 0;
}