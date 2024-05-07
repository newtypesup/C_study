#include<stdio.h>

main() {
	int i = 1;
	int su;
	int cnt;

	for (su = 2; su <= 100; su++) {
		cnt = 0;
		i = 1;

		while (i < su) {
			if (su % i == 0) {
				cnt++;
			}
			i++;
		}
		if (cnt == 1) {
			printf("%d ",su);

		}

	}
}