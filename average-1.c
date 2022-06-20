// 성적(>= 0) 평균 계산
// 보초값(sentinel value) 사용

#include <stdio.h>

int main() {
	int score, n = 0;
	double sum = 0;

	printf("성적 입력(종료시 음수 입력)\n");
	while (scanf("%d", &score), score >= 0) {
		sum += score;
		n++;
	}
	
	if (n > 0)
		printf("평균: %g\n", sum / n);
	return 0;
}
