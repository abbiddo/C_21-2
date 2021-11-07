/**
프로그램명 : practice01.c
설명 : 세 개의 정수를 입력받아 최댓,최솟값 출력 (함수의 리턴 타입을 void, 전역 변수 사용, 결과값 출력 main() 함수에서 출력)
작성일시 : 2021.09.27
작성자 : 정소영
**/

#include <stdio.h> 
int max,min;                                   // 전역 변수 선언 
void min_max(int a, int b, int c);             // void 함수 선언 

int main(){
	int num1, num2, num3;
	printf("Enter three integers.\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	min_max(num1,num2,num3);                   // 함수에 값 전달 
	printf("min is %d, max is %d.",min,max);   // 전역 변수 출력 
}

void min_max(int a, int b, int c){
	if (a<=b && a<=c) min=a;                   // 최솟값 탐색 후 min 전역 변수에 저장
	else if (b<=a && b<=c) min=b;
	else min=c;
	
	if (a>=b && a>=c) max=a;                   // 최댓값 탐색 후 max 전역 변수에 저장 
	else if (b>=a && b>=c) max=b;
	else max=c;
}
