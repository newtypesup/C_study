#include<stdio.h>

main() {
	int i, s, z;
	int cnt = 0, sum = 0;
	for (i = 2; i <= 10000; i++) {

		for (s = 1; s < i; s++) {
			if (i % s == 0) {
				cnt++;
				sum += s;

			}
		}
		if (i == sum) {
			printf("%d : {", i);
			for (z = 1; z <= i; z++) {
				if (i % z == 0) {
					printf("%d ", z);
				}
			}
			printf("}\n");
		}

		cnt = 0;
		sum = 0;
	}
}

//#include<stdio.h>
//
//main() {
//	int i, s;
//	for (i = 1; i <= 10; i++) {
//		printf("%2d : ", i);
//		for (s = 1; s <= 11 - i; s++) {
//			printf("%d ", s);
//		}
//		printf("\n");
//	}
//}