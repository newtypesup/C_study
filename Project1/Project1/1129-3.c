#include<stdio.h>
main() {
	int k, e, m, sum;
	float avg;
	k = 97;
	e = 98;
	m = 98;
	printf("���� : %3d\n", k);
	printf("���� : %3d\n", e);
	printf("���� : %3d\n", m);
	sum = k + e + m;
	printf("�հ� : %d\n", sum);
	avg = sum / 3.;
	printf("��� : %.2f\n", avg);
}