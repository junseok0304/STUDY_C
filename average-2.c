// ����(>= 0) ��� ���
// scanf ��� ���

#include <stdio.h>

int main() {
	int score, n = 0;
	double sum = 0;

	printf("���� �Է�\n");
	while (scanf("%d", &score) == 1) {
		sum += score;
		n++;
	}
	
	if (n > 0)
		printf("���: %g\n", sum / n);
	return 0;
}
