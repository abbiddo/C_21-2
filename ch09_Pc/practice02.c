/**
프로그램명 : practice02.c
설명 : 두 문자 배열에 저장된 문자열 중에서 길이가 긴 문자열 출력 
작성일시 : 2021.11.12
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>                        // strlen 함수가 선언된 헤더 파일 
int main(){
	char str1[20]="Long time no see.";     // 문자 배열 선언과 초기화 
	char str2[20]="What's up?";
	
	if (strlen(str1)>strlen(str2)) printf("%s",str1);    // str1의 길이가 더 길면 str1 출력 
	else printf("%s",str2);                // 아니면 str2 출력 
} 
