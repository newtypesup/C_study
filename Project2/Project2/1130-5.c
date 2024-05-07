#include<stdio.h>
main() {
	int l, x;
	for (l = 0; l < 5 ; l++) {
		for (x = 0; x <= 4-l; x++) {
			printf("¡Ù");
		}

		printf("\n");
	}
			
}


//L X
// 
//0 0
//1 0
//1 1
//2 0
//2 1
//2 2
//3 0
//3 1
//3 2
//3 3
//..
//..
//..
//..
//..
