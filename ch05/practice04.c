/**
프로그램명 : practice04.c
설명 : 재귀 호출로 입력 받은 만큼 * 출력 
작성일시 : 2021.09.27
작성자 : 정소영 
**/

#include <stdio.h>
int asterisk(int n);           // asterisk 함수 선언 

int main(){
	int n;
	printf("Enter the number of asterisk.\n");
	scanf("%d",&n);
	
	while(n<=0){               // n이 0이하이면 재입력 받음 
		printf("Please enter it again.\n");
		printf("Enter the number of asterisk.\n");
		scanf("%d",&n);
	}
	
	asterisk(n);              // asterisk 함수 호출
}

int asterisk(int n){
	if (n==0) return 0;       // n이 0이면 0 반환
	printf("*");              
	return asterisk(n-1);     // asterisk(n-1) 을 호출 
}
