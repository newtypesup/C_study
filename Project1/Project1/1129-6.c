#include<stdio.h>
main() {
	float t, w, bmi;

	printf("키 : ");
	scanf("%f", &t);
	printf("몸무게 : ");
	scanf("%f", &w);

	bmi = w / (t * t) * 10000;
	
	printf("bmi = %.2f\n", bmi);

	if (bmi >= 30) {
		printf("비만\n");
	}
	else if (bmi >= 23) {
		printf("과체중\n");
	}
	else {
		printf("정상\n");
	}
	
}