/**
프로그램명 : practice07.c
설명 : 실행결과에 맞게 해당 소스 코드의 빈칸을 채워라   
작성일시 : 2021.11.11
작성자 : 정소영
**/

#include <stdio.h> 
#include <string.h>
int main(){
	//____________________________
	char *s1 = "Pachelbel Canon";
	char *s2 = "Pachelbel Canon";
	int ret = strcmp(s1,s2);
	
	printf("%d\n",ret);
	
	return 0;
}

/**
실행 결과
0
**/ 
