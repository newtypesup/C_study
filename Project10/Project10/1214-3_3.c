#include<stdio.h>

int sum(int s, int *c) {

	return *c += s;

}

main() {
	int su;
	int total = 0;


	while (1) {
		printf("�����Է� : ");
		scanf("%d", &su);
		if (su == 9) {
			break;
		}
		sum(su, &total);
		printf("�����հ� : %d\n", total);

	}

	printf("���հ� : %d\n", total);

}