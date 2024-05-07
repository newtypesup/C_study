#include<stdio.h>

main() {
	int i, s, z;
	int sum;
	i = 2;

	while (i <= 100000) {
		s = 1;
		sum = 0;
		while (s < i) {
			if (i % s == 0) {
				sum += s;
			}
			s++;
		}
		if (i == sum) {
			printf("%d : {", i);
			z = 1;
			while (z <= i) {
				if (i % z == 0) {
					printf("%d ", z);
				}
				z++;
			}
			printf("} \n");
		}
		i++;
	}
}