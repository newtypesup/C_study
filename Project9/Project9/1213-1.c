#include<stdio.h>

main() {
	char str[4][10] = { "hello","bye", "up","down" };
	

	
	for (int i = 0; i < 4; i++) {

		printf("%s\n", str[i]);
	}
}