/**
프로그램명 : example10.c
설명 : 실행결과에 맞게 해당 소스 코드의 빈칸을 채워라   
작성일시 : 2021.11.11
작성자 : 정소영
**/

#include <stdio.h> 
#include <string.h>
int main(){
	char s1[20]=" 9th Symphony";
	char s2[40]="Beethoven";
	
	//______________________
	strcat(s2,s1);
	
	printf("%s\n",s2);
	
	return 0;
}

/**
실행 결과
Beethoven 9th Symphony
**/ 
