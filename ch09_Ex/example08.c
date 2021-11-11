/**
프로그램명 : practice08.c
설명 : 실행결과에 맞게 해당 소스 코드의 빈칸을 채워라   
작성일시 : 2021.11.11
작성자 : 정소영
**/

#include <stdio.h> 
#include <string.h>
int main(){
	char *s1 = "C Language";
	char s2[20];
	
	//____________________________
	strcpy(s2,s1);
	
	printf("%s\n",s2);
	
	return 0;
}

/**
실행 결과
0
**/ 
