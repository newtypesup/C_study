#include<stdio.h>
main() {
	int a = 10;
	float b = 3.11;
	char c = 'a';
	int ar[4] = { 1, 2, 3 };

	printf("int�� size�� %d �Դϴ�.\n", sizeof(a));
	printf("flioat�� size�� %d �Դϴ�.\n", sizeof(b));
	printf("char�� size�� %d �Դϴ�.\n", sizeof(c));
	printf("array�� size�� %d �Դϴ�. \n", sizeof(ar));

}