/**
프로그램명 : example02.c
설명 : 입력 받은 두 수의 합 출력 / 해당 소스 코드의 빈칸을 채워라  
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1;
	int num2;
	
	//_________________________________
	int *numPtr1=malloc(sizeof(int)); 
	//_________________________________
	int *numPtr2=malloc(sizeof(int));
	 
	scanf("%d %d", &num1, &num2);
	*numPtr1 = num1;
	*numPtr2 = num2;
	printf("%d\n", *numPtr1 + *numPtr2);
	
	free(numPtr1);
	free(numPtr2);
}

/**
실행 결과
10 20     #입력
30        #출력 
**/ 
