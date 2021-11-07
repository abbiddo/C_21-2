/**
프로그램명 : practice04.c
설명 : 세 개의 양수의 합이 짝수면 가장 큰 수, 홀수면 합 출력 
작성일시 : 2021.09.22
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int num1=0, num2=0, num3=0, sum=0;
	
	printf("세 개의 양의 정수를 입력하시오 : ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	sum=num1+num2+num3;                  // 세 양의 정수 합 
	
	if (sum%2==0){                       // 합이 짝수일 때 
		if (num1>=num2)                  // num1이 num2 보다 크거나 같고 
			if (num1>=num3)              // num3 보다 크거나 같을 때 
				printf("합은 짝수, 가장 큰 수는 %d",num1);
			else                         // num3이 num1 보다 클 때 
				printf("합은 짝수, 가장 큰 수는 %d",num3);
				
		else                             // num2가 num1 보다 크고 
			if (num2>=num3)              // num3 보다 크거나 같을 때 
				printf("합은 짝수, 가장 큰 수는 %d",num2);	
			else                         // num3이 num2 보다 클 때 
				printf("합은 짝수, 가장 큰 수는 %d",num3);
	}
	else                                 // 합이 홀수일 때 
		printf("합은 홀수, 합은 %d",sum);
	
}
