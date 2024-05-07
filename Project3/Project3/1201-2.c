#include<stdio.h>
main() {
	int ar[5];
	int i;

	for (i = 0; i < 5; i++) {
		ar[i] = i + 1;
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", ar[4-i]);
		//배열 만들기
	}
}
