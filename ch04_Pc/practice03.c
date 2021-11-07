/**
프로그램명 : practice03.c
설명 : 입력한 수의 약수 구하기 
작성일시 : 2021.09.22
작성자 : 정소영
**/

#include <stdio.h>
int main(){
    int n=0,i=1;
	printf("Enter a natural number.\n");
	scanf("%d",&n); 
	
	for (i;i<=n;i++)                       // 1~n 반복 
		if (n%i==0) printf("%d ",i);       // i가 n으로 나누어 떨어지면 출력 
			
}

