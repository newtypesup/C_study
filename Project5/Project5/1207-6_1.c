#include<stdio.h>
main() {
	int m = 77527, i = 0, fm;
	int num[10] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1 };

	for (i = 0; i < 10; i++) {
		fm = m / num[i];
		if (fm > 0) {
			printf("%d원 %d개입니다.\n", num[i], fm);
			m = m - (fm * num[i]);
		}
	}
}//내가 한것