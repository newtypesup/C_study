#include<stdio.h>

main() {
	int i = 1;
	int su;

	printf("�ڿ��� �Է� : ");
	scanf("%d", &su);

	while (i < su) {
		if (su % i == 0) {
			printf("%d,", i);
		}
		i++;
	}
	printf("%d", i);
	
}//��� ���