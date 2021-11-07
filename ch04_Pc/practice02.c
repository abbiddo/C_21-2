/**
프로그램명 : practice02.c
설명 : 1부터 n까지의 합 (5의 배수 제외) 
작성일시 : 2021.09.22
작성자 : 정소영
**/

#include <stdio.h>
int main(){
    int n=0,sum=0,num=0,i=1;
	printf("Enter a natural number.\n");
	scanf("%d",&n);
	
	for(i;i <= n;i++){           // 1부터 n까지 합 
		if(i % 5 == 0) continue; // 5 제외 
		sum+=i;
	}
	
	printf("The sum is %d.",sum);  
}

