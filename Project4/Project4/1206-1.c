#include<stdio.h>
int path(int a) {
	a = a + 4;
	return a;
}
int main() {
	int s;
	s = path(4);
	printf("%d\n", s);
}