#include<stdio.h>

main() {
	int i = 1, sum = 0;
as:
	sum += i;
	i++;
	if (i <= 10) {
		goto as;
	}
	goto ss;
	printf("%d\n", i);
ss:;
	printf("sum = %d\n", sum);

}//goto as - ss