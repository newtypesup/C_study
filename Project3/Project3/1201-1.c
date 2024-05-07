#include<stdio.h>
main() {
	int i, j;
	int su = 0;
	
	for (i = 0; i < 5; i++) {
		for  (j = 0; j <= 3 - i; j++){
			printf("  ");
		}
		for (j = 0; j <= su; j++) {
			printf("☆");
		}
		su = su + 2;
		printf("\n");
	}
	su = su - 4;
	for (i = 0; i < 4; i++) {
		for (j = 0; j <= i; j++) {
			printf("  ");
		}
		for (j = 0; j <= su; j++) {
			printf("☆");
		}
		su = su - 2;
		printf("\n");
		//마름모 만들기
	}
}