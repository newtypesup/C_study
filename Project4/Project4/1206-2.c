#include<stdio.h>
main() {
	int a = 10;
	float b = 3.11;
	char c = 'a';
	int ar[4] = { 1, 2, 3 };

	printf("int의 size는 %d 입니다.\n", sizeof(a));
	printf("flioat의 size는 %d 입니다.\n", sizeof(b));
	printf("char의 size는 %d 입니다.\n", sizeof(c));
	printf("array의 size는 %d 입니다. \n", sizeof(ar));

}