/**
프로그램명 : practice04.c
설명 : a의 b제곱 출력 
작성일시 : 2021.09.22
작성자 : 정소영
**/

#include <stdio.h>
int main(){
    int a=0,b=0,i=1,result=1;
	printf("Enter base and power.\n");
	scanf("%d %d",&a,&b); 
	
	for (i;i<=b;i++)                       // b만큼 반복 
		result*=2;                         // result 값에 2를 곱함 
	
	printf("%d to the power of %d is %d\n",a,b,result);
}

