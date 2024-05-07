#include<stdio.h>

main() {
	int ar[5][5];
	int i, j, n = 1;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			ar[i][j] = n++;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%2d ", ar[i][j]);
		}
		printf("\n");
	}
}//¹è¿­ ºù°íÆÇ