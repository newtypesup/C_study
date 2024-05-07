#include<stdio.h>
main() {
	int k, e, m, sum;
	float avg;
	k = 97;
	e = 98;
	m = 98;
	printf("국어 : %3d\n", k);
	printf("영어 : %3d\n", e);
	printf("수학 : %3d\n", m);
	sum = k + e + m;
	printf("합계 : %d\n", sum);
	avg = sum / 3.;
	printf("평균 : %.2f\n", avg);
}