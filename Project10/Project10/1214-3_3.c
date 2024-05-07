#include<stdio.h>

int sum(int s, int *c) {

	return *c += s;

}

main() {
	int su;
	int total = 0;


	while (1) {
		printf("숫자입력 : ");
		scanf("%d", &su);
		if (su == 9) {
			break;
		}
		sum(su, &total);
		printf("누적합계 : %d\n", total);

	}

	printf("총합계 : %d\n", total);

}