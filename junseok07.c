#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	float total;
	float x, y;

	printf("두 실수 입력 : ");
	scanf("%f %f", &x, &y);

	total = (x - y > 0) ? x - y : y - x;
	printf("|%g - %g| = %g", x, y, total);
	
	return 0;
}


