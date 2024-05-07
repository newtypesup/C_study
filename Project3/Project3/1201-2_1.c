#include<stdio.h>
main() {
	int ar[5];
	int i, j;

	for (i = 0; i < 5; i++) {
		ar[i] = i + 1;
	}
	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) {
			printf("%d", ar[j]);
		}
		for (j = 0; j < i; j++) {
			printf("%d", ar[j]);
		}
		printf("\n");

	}
}