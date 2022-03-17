#include <stdio.h>

int main() {

	char ID[50];

	scanf_s("%s", &ID, sizeof(ID));

	printf("%s??!\n", ID);

	return 0;
}