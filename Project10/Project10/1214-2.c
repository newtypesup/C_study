#include<stdio.h>
int sum(int z, int x) {
	int s;
	s = z + x;
	return s;

}

main() {
	int a= 5, b= 7;
	printf("%d\n", sum(a, b));
}