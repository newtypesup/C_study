#include<stdio.h>


main() {

	int i;
	int x=0, y=0;
	int in[100];

	for (i = 0;; i++) {
		scanf("%d", &in[i]);
		if (in[i] == 9) {
			break;
		}
	}
	for (int j = 0; j < i; j++) {
		printf("%d ", in[i-j-1]);
	}
}