#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	srand(time(NULL));
	int r;
	int i;
	for (i = 0; i < 10; i++) {
		r = rand();
		printf("%d번 - %d\n",i+1 , r);//1에서 10까지 산출.
	}

}