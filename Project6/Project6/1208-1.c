#include<stdio.h>
main() {
	int i = 0;
	int s = 0;

	while (i < 10) {
		
		i++;
		if (i % 3 == 0) {
			continue;
		}
		printf("%d\n", i);
		s += i;
	}
	printf("s = %d\n", s);

}