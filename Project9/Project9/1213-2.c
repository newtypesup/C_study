#include<stdio.h>
#include<string.h>

main() {
	// strlen = 문자열길이
	char str[10] = "com in";
	int cnt;
	cnt = strlen(str);
	printf("str의 길이 : %d\n", cnt);

	// strcpy:문자열복사
	char a[] = "hello" ;
	char b[10];
	strcpy(b, a);
	printf("%s\n", b);
	//for (int i = 0; strlen(a); i++)
	//printf("%s\n", b);
	// 
	// 
	//strcat: 문자열 이어 붙이기
	char s1[50] = "123";
	char s2[10];
	char s3[5] = "67";

	strcat(s1, "56");
	strcat(s1, s3);
	printf("%s\n", s1);

	// strcmp: 문자열 비교( 같을 때 0, 비교문자열이 클 때 : -1, 비교문자열이 작을 때 : 1)

	char t1[] = "aaa";
	char t2[] = "abc";
	int d;

	d = strcmp(t1, t2);
	printf("%d \n", d);

}