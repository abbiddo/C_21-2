/**
프로그램명 : practice01.c
설명 : 함수를 사용해 두 개의 문자 배열에 저장된 문자열 바꾸기 
작성일시 : 2021.11.12
작성자 : 정소영
**/

#include <stdio.h>
void swap_string(char str1[], char str2[]);     // void 함수 선언 

int main(){
	char str1[20]="apple";                        // 문자 배열 선언과 초기화 
	char str2[20]="banana";
	
	swap_string(str1,str2);                       // 함수 호출 
	
	printf("str1 : %s\nstr2 : %s",str1,str2);	  // 문자열 출력 
}

void swap_string(char str1[], char str2[]){
	char str[20];                                 // 빈 문자 배열 선언 
	strcpy(str,str1);                             // 빈 문자 배열에 str1 복사 
	strcpy(str1,str2);                            // str1에 str2 복사 
	strcpy(str2,str);                             // str2에 빈 문자 배열에 복사해둔 str1값 복사 
}
