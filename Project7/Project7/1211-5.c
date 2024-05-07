#include<stdio.h>
main() {
	int a=1, b=1, c;
	int i;
	int s = 4;
	c = a + b;
	printf("%d + %d + %d + ", a, b, c);

	for (i = 0; i < 7; i++) {
		a = b;
		b = c;
		c = a + b;
		s += c;

		printf("%d ", c);
		if (i != 6) {
			printf(" + ");
		}
		else {
			printf(" = %d\n", s);
		}
	}

}