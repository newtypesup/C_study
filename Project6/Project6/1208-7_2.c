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
			if (i % 2 == 0) {
				printf("%2d ", ar[i][j]);
			}
			else {
				printf("%2d ", ar[i][4 - j]);
			}
		}
		printf("\n");
	}
}//¹è¿­ 12345 109876 1112131415 2019181716 2122232425ºù°íÆÇ