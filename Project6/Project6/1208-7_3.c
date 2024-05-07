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
			if (j % 2 == 0) {
				printf("%2d ", ar[j][i]);
			}
			else {
				printf("%2d ", ar[j][4 - i]);
			}
		}
		printf("\n");
	}
}//110112021 29121922 38131823 47141724 561516125