#include<stdio.h>

int fact(int n) {
	printf("%d\n", n);
	if (n == 1) {
		return 1;

	}
	return n * fact(n - 1);

}

main() {
	int n = 5;
	
	printf(" 5! = %d", fact(n));
}//Àç±ÍÇÔ¼ö