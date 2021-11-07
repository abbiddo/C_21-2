/**
프로그램명 : practice01.c
설명 : 1~n 까지의 함, 합이 입력 정수를 넘지 않아야 함 
작성일시 : 2021.09.22
작성자 : 정소영
**/

#include <stdio.h>
int main(){
    int n=0,sum=0,i=0;
	printf("Enter a Maximum number.\n");
	scanf("%d",&n);
	for (i;i<=n;i++){                   // 합을 구하기 위한 반복문                        
		sum+=i;  
		if (sum>n) break;               // 합이 입력 정수를 초과하면 반복문 정지 
	}
	printf("The sum from 1 to %d is %d.",i-1,sum-i);  // 초과 전 값으로 출력
}
