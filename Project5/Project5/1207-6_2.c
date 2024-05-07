#include<stdio.h>
main() {
	int m = 77527;
	int cnt;
	int k = 50000;

	while (m>0) {
		cnt = m / k;
		printf("%d원\t%d개\n", k, cnt);
		m = m - (k * cnt);
		k = k / 5;
		cnt = m / k;
		printf("%d원\t%d개\n", k, cnt);
		m = m - (k * cnt);
		k = k / 2;

	}
}