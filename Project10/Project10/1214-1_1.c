#include<stdio.h>

main() {
	char a[6] = { '1','2','3','a','b','c' };
	char* p;

	p = &a;//����ȭ

	printf("%c\n", *p);
	p++;
	printf("%c\n", *p);

}//������2