#include<stdio.h>
main() {
	int j;

	printf("점수 입력 : ");
	scanf("%d", &j);

//	if (j >= 90) {
//		printf("A입니다.");
//	}
//	else if (j >= 70) {
//		printf("B입니다.");
//	}
//
//	else {
//		printf("C입니다.");
//	}
//

	switch(j/10) {
		case 10:
		case 9:
			printf("A\n");
			break;
		case 8:
		case 7:
			printf("B\n");
			break;
		default:
			printf("C\n");
	}
}//switch break 활용하기 응용 (실제로는 잘 사용x)