/**
프로그램명 : example05.c
설명 : 실행결과에 맞게 해당 소스 코드의 빈칸을 채워라  
작성일시 : 2021.11.10
작성자 : 정소영
**/

#include <stdio.h>
#include <stdlib.h>
int main() {
	char *s1 = malloc(sizeof(char) * 10);
	char *s2 = malloc(sizeof(char) * 10);
	char *s3 = malloc(sizeof(char) * 10);
	
	printf("문자열을 세 개 입력하세요: ");
	//_________________________________________
	scanf("%s %s %s",s1,s2,s3);

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);

	free(s1);
	free(s2);
	free(s3);

	return 0;
}

/**
실행 결과
문자열을 세 개 입력하세요 : Beethoven 9th symphony   #입력
Beethoven
9th
symphony                                             #출력 
**/ 
