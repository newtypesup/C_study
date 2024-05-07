#include<stdio.h>
main() {
	int ar[5] = { 47,95,64,21,66 };
	int i, j, temp, x;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			if (ar[j] > ar[j + 1]) {
				temp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = temp;
			}
		}
		for (x = 0; x < 5; x++) {
			printf("%d ", ar[x]);
		}
		printf("\n");
	}
	//버블 정렬
}