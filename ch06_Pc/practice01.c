/**
프로그램명 : practice01.c
설명 : 10진수를 몫이 0될 때 까지 2로 나누고 나머지를 배열에 순차적 저장 후 배열을 거꾸로 읽으면서 출력 
작성일시 : 2021.10.18
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int n,i=0,j=3;
	int bin[4]={0};                           // bin의 크기를 4로 하고 값을 0으로 초기화 
	printf("Enter a decimal number.\n");
	scanf("%d",&n);
	
	while (n!=0){							  // n이 0이 될 때 까지 반복  
		bin[i]=n%2;                           // 배열에 n을 2로 나눈 나머지 저장 
		n/=2;                                 // n을 2로 나눈 몫으로 저장 
		i++; 
	}
	
	for (j;j>=0;j--) printf("%d",bin[j]);	  // 배열 거꾸로 출력 
}
