#include<stdio.h>

main() {
	char a[6] = { '1','2','3','a','b','c'};
	char* p;

	p = &a;//동기화

	printf("%c %c\n", *p, *(p + 3));

}// 포인터1