#include<stdio.h>

int f();
int main(void) {
	printf("%d", f(4));
}

int f(int i) {

	int arr[5] = { 5, 4, 3, 2, 1 };

	if (i <= 0)
		return 0;
	else
		return arr[i] % 3 * f(i - 1);
	
}