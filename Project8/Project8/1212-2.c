#include<stdio.h>
main() {
	int ar[5] = { 23, 45, 84, 61, 22 };
	int br[5];
	int s;

	for (int i = 0; i < 5; i++) {
		br[i] = ar[i];

	}
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 4; j++) {
			if (br[j] > br[j + 1]) {
				int temp = br[j];
				br[j] = br[j + 1];
				br[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		if (ar[i] == br[2]) {
			s = i;
		}
	}
	printf("3번째로 작은 수 : %d\n%d 위치에 있습니다. \n", br[2], s);
}