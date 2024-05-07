#include<stdio.h>
main() {
	int su1, su2;
	char buho;
	printf("su1 입력 : ");
	scanf("%d", &su1);
	printf("부호 입력 : ");
	scanf(" %c", &buho);
	printf("su2 입력 : ");
	scanf("%d", &su2);

	if (buho == '+') {
		printf("%d + %d = %d", su1, su2, su1 + su2);
	}
	else if (buho == '-') {
		printf("%d - %d = %d", su1, su2, su1 - su2);
	}
	else if (buho == '*') {
		printf(" %d * %d = %d", su1, su2, su1 * su2);
	}
	else {
		printf("%d / %d= %d", su1, su2, su1 / su2);
	}

}//계산기 만들기