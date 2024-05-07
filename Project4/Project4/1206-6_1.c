#include<stdio.h>
main() {
	int a = 10, b = 9;
	int rt;
	rt = a++ >= ++b||a++ <= ++b;
	printf("a = %d, b= %d, rt = %d\n", a, b, rt);

}