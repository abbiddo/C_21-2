/**
프로그램명 : practice05.c
설명 : 재귀 함수로 a의 b제곱 출력 
작성일시 : 2021.09.27
작성자 : 정소영 
**/

#include <stdio.h>
int square(int a, int b);           // square 함수 선언 

int main(){
	int a,b;
	printf("Enter vase and mutiplier\n");
	scanf("%d %d",&a,&b);
	printf("%d to the power of %d is %d",a,b,square(a,b));   // square 함수 호출 후 반환 값 출력 
}

int square(int a, int b){
	if (b==1) return a;             // b가 1이면 a반환 
	return a*square(a,b-1);         // square(a,b-1) 호출 후 a와 곱한 값 출력 
}
	
