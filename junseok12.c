#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	double score;
	double sum = 0;

	printf("실수들 입력\n");
	while (scanf("%lf", &score) == 1) {
		sum += score;
		n++;
	}

	if (n > 0)
		printf("합: %g\n", sum);
	return 0;
}






