#include<stdio.h>
main() {
	int k, e, m, sum;
	float avg;
	printf("국어점수 : ");
	scanf("%d", &k);
	printf("영어점수 : ");
	scanf("%d", &e);
	printf("수학점수 : ");
	scanf("%d", &m);

	printf("국어 : %3d\n", k);
	printf("영어 : %3d\n", e);
	printf("수학 : %3d\n", m);
	sum = k + e + m;
	printf("합계 : %d\n", sum);
	avg = sum / 3.;
	printf("평균 : %.2f\n", avg);
}