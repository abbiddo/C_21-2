/**
프로그램명 : practice03.c
설명 : 재귀 호출로 입력 받은 음수 n부터 -1까지의 합 출력 
작성일시 : 2021.09.27
작성자 : 정소영 
**/

#include <stdio.h>
int minus_sum(int n);          // minus_sum 함수 선언 

int main(){
	int n;
	printf("Enter n.\n");
	scanf("%d",&n);
	
	while(n>=0){               // n이 0이상이면 재입력 받음 
		printf("Please enter it again.\n");
		printf("Enter n.\n");
		scanf("%d",&n);
	}
	
	printf("The sum is %d.",minus_sum(n));   // minus_sum 함수 호출 후 반환값 출력 
}

int minus_sum(int n){
	if (n==-1) return -1;      // n이 -1이면 -1반환 
	return n+minus_sum(n+1);   // minus_sum(n+1)의 호출 값에 n을 더한 값 반환  
}

