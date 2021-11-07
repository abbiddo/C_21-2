/**
프로그램명 : practice02.c
설명 : 정수 입력 시 그 수의 제곱값 출력 
작성일시 : 2021.09.22
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int num=1;                                              // num 변수를 1로 초기화 (0으로 하면 while문 실행 X) 
	while (num!=0) {
		printf("양수 입력 : ");
		scanf("%d",&num);
		
		if (num>0) printf("%d\n",num*num);                  // num이 양수이면 제곱값 출력 
		else if (num<0) printf("양수를 입력하세요.\n");     // num이 음수이면 안내문 출력 (else 이용 -> 0입력 시 안내문 출력) 
	}
}
