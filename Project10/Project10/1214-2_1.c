#include<stdio.h>
int sum(int *z, int *x) {
	int s;

	s = ++*z + --*x;

	return s;

}

main() {
	int a = 5, b = 7;
	int ss;

	ss = sum(&a, &b);

	printf("a = %d, b = %d\n", a, b);
	printf("ss = %d\n", ss);
}//Æ÷ÀÎÅÍ ¾ÅÅ© Æ¯Â¡.