#include<stdio.h>

main() {
	int a[6] = { '1','a','d','2','b','c' };
	int* p;

	p = &a[2]; //동기화

	printf("%c %c %c\n", *p, *(p-1),*p-1);//3번은 ascii코드에서 1빠짐.
		
} //포인터3