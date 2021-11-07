/**
프로그램명 : practice02.c
설명 : 음수 입력 전까지 입력 받고, 입력 받을 때 마다 최솟값 갱신 후 출력 
작성일시 : 2021.09.27
작성자 : 정소영 
**/

#include <stdio.h>
int current_min(int n);          // current_min 함수 선언 

int main(){
	int num=0;
	while(num>=0){               // num이 0 이상일 경우만 반복 
		printf("Enter a number.\n");
		scanf("%d",&num);
		if (num>=0)	             // num이 0 이상일 경우 함수 실행 후 결과 출력 
			printf("Current min is %d.\n",current_min(num));
	}	
}

int current_min(int n){
	static int min=100;          // 정적 변수 선언 
	if (n<min) min=n;            // 새로 입력한 값이 작으면 min값 변환
	return min;       	         // min값 반환 
}
