#include<stdio.h>
main() {
	int su1, su2;
	char buho;
	printf("su1 �Է� : ");
	scanf("%d", &su1);
	printf("��ȣ �Է� : ");
	scanf(" %c", &buho);
	printf("su2 �Է� : ");
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

}//���� �����