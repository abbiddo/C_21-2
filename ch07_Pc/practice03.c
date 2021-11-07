/**
프로그램명 : practice03.c
설명 : n!을 계산하는 재귀 함수 
작성일시 : 2021.10.18
작성자 : 정소영
**/

#include <stdio.h>
void factorial(int n, int *p); 
int main(){
	int n,result=1;										// result를 1로 초기화 
	int *ptr=&result;									// ptr 포인터 변수에 result 주소값 저장 
	printf("Enter a natural number.\n");
	scanf("%d",&n);
	
	factorial(n,ptr);									// 함수에 입력 받은 n과 result의 주소값이 저장된 ptr 넘겨줌 
	printf("%d factorial is %d.",n,result);
}

void factorial(int n, int *p){
	if (n>0){											// n이 0보다 클 때만 실행 
		*p*=n;											// result에 n을 곱해서 저장 
		factorial(n-1,p);								// 함수에 n-1과 result의 주소를 넘겨주는 재귀함수 
	}
}
