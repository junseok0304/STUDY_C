#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	double score;
	double sum = 0;

	printf("�Ǽ��� �Է�\n");
	while (scanf("%lf", &score) == 1) {
		sum += score;
		n++;
	}

	if (n > 0)
		printf("��: %g\n", sum);
	return 0;
}






