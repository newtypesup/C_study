#include<stdio.h>

main() {
	char ar[5] = { 'a','b','c','d','e' };
	int i, j;
	char temp;


	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%c ", ar[j]);
		}
		printf("\n");

		temp = ar[0];

		for (j = 0; j < 4; j++) {
			ar[j] = ar[j + 1];
		}
		ar[j] = temp;
		//배열 순서 거꾸로 밀기 [아직 안함]
	}

}