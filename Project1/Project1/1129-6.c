#include<stdio.h>
main() {
	float t, w, bmi;

	printf("Ű : ");
	scanf("%f", &t);
	printf("������ : ");
	scanf("%f", &w);

	bmi = w / (t * t) * 10000;
	
	printf("bmi = %.2f\n", bmi);

	if (bmi >= 30) {
		printf("��\n");
	}
	else if (bmi >= 23) {
		printf("��ü��\n");
	}
	else {
		printf("����\n");
	}
	
}