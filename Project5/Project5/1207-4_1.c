#include<stdio.h>
main() {

	int su, sum = 0;

	while (1) {
		scanf("%d", &su);
		sum += su;

		if (su == 9) {
			break;
		}
	}
	printf("гу : %d\n", sum-9);

}