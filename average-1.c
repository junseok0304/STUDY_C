// ����(>= 0) ��� ���
// ���ʰ�(sentinel value) ���

#include <stdio.h>

int main() {
	int score, n = 0;
	double sum = 0;

	printf("���� �Է�(����� ���� �Է�)\n");
	while (scanf("%d", &score), score >= 0) {
		sum += score;
		n++;
	}
	
	if (n > 0)
		printf("���: %g\n", sum / n);
	return 0;
}
