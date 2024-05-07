#include<stdio.h>
main() {
	int i, su;
	for (su = 1; su <= 9; su++) {
		for (i = 2; i < 10; i++) {
			printf("%d X %d = %2d  ",i , su, su * i);
		}
		printf("\n");
	}
}

//su, i -> su X i = su*i
