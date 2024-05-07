#include<stdio.h>
main() {
	int i, j;
	printf("2 ");
	
	for (i = 3; i <= 100; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			printf(",%d ", i);
		}
	}
}