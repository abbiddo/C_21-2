/**
프로그램명 : practice03.c
설명 : 성과 이름을 입력받고 하나의 문자열로 붙여서 출력하기 
작성일시 : 2021.11.12
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>                        // strcpy, strcat 함수가 선언된 헤더 파일 
int main(){
	char last_name[20];                    //성을 입력할 배열
	char first_name[20];                   //이름을 입력할 배열
	char full_name[20];                    //성과 이름을 모두 저장할 배열
	
	printf("성을 입력하시오 : ");
	scanf("%s",last_name);                 // last_name 입력 
	
	printf("이름을 입력하시오 : ");
	scanf("%s",first_name);                // first_name 입력 
	
	strcpy(full_name,"");                  // full_name 문자 배열을 빈 문자열로 복사 
	strcat(full_name,last_name);           // full_name + last_name => full_name
	strcat(full_name," ");                 // full_name + " " => full_name
	strcat(full_name,first_name);          // full_name + first_name => full_name
	
	printf("성을 포함한 이름은 %s 입니다.",full_name);   // full_name 출력 
}
