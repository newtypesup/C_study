#include<stdio.h>

main() {
	int a[6] = { '1','a','d','2','b','c' };
	int* p;

	p = &a[2]; //����ȭ

	printf("%c %c %c\n", *p, *(p-1),*p-1);//3���� ascii�ڵ忡�� 1����.
		
} //������3