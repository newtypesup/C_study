#include<stdio.h>
main() {
	int j;

	printf("���� �Է� : ");
	scanf("%d", &j);

//	if (j >= 90) {
//		printf("A�Դϴ�.");
//	}
//	else if (j >= 70) {
//		printf("B�Դϴ�.");
//	}
//
//	else {
//		printf("C�Դϴ�.");
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
}//switch break Ȱ���ϱ� ���� (�����δ� �� ���x)