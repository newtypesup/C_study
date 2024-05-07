#include<stdio.h>
main() {
	int n,z;
	int s = 1;
	printf("1");

	for (n = 2; n <= 10; n++) {

		if (n % 2 == 0) {
			
			z = n * -1;
			s += z;
			printf("%d", z);
			
		}
		else {
			s += n;
			printf("+%d", n);
			
		}


	}
	printf("=%d",s);

}