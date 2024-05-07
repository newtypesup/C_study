#include< stdio.h>

main() {
	int ar[5];
	int i, n = 1;

	for (i = 0; i < 5; i++) {
		ar[i] = n++;

	}
	for (i = 0; i < 5;i++) {
		printf("%d ", ar[4-i]);
	}
}