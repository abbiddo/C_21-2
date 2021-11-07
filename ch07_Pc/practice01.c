/**
프로그램명 : practice01.c
설명 : a,b를 더해 *p에 저장하는 add() 함수를 이용해 main 함수에서 결과 출력 
작성일시 : 2021.10.18
작성자 : 정소영
**/

#include <stdio.h>
void add(const int a, const int b, int *p); 
int main(){
	int a,b,result;
	int *ptr=&result;							// ptr 포인터 변수에 result 주소값 저장 
	printf("Enter two integers.\n");
	scanf("%d %d",&a,&b);
	
	add(a,b,ptr);                               // 함수에 입력 받은 a,b와 result의 주소값인 ptr 변수 넘겨줌 
	printf("The sum is %d.",result);            // 함수에서 저장된 result 값 출력 
}

void add(const int a, const int b, int *p){
	*p=a+b;                                     // result에 a+b 저장 
}
