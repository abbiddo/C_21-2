/**
프로그램명 : example04.c
설명 : 실행결과에 맞게 해당 소스 코드의 빈칸을 채워라  
작성일시 : 2021.11.10
작성자 : 정소영
**/

#include <stdio.h>
#include <stdlib.h>
int main() {
	//______________________
	char *s1=malloc(sizeof(char)*10);
	
	printf("문자열을 입력하세요: ");
	//______________________
	scanf("%s",s1);

	printf("%s\n", s1);
	free(s1);
	
	return 0; 
}

/**
실행 결과
문자열을 입력하세요 : Hello   #입력
Hello                         #출력 
**/ 
