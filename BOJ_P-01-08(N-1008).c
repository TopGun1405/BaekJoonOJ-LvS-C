#include <stdio.h>

int main() {

	int A, B;

	scanf_s("%d %d", &A, &B);

	printf("%.10f\n", (double)A / (double)B);
	// ���� ����� ��°��� ������� �Ǵ� �������� 10^-9 �����̸� �����̱� ������ %.10

	return 0;
}