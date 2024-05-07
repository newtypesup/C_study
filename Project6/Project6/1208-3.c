#include<stdio.h>

main() {
	int i;
	int s;
	int cnt = 0;

	for (i = 1; i <= 100; i++) {
		cnt = 0;
		for (s = 1; s <= i; s++) {
			if (i % s == 0) {
				cnt++;
			}
		}
		if (cnt == 2) {
			printf("%d:소수\t개수:%d\n", i, cnt);
		}
	}
}//소수 출력. 다른 방법으로 다시 해보기