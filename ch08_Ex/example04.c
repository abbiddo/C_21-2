/**
프로그램명 : example04.c
설명 : 2진수 -> 10진수 / 해당 소스 코드의 빈칸을 채워라  
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
int main()
{
	int decimal = 0;
	int binary[4] = { 1, 1, 0, 1 }; // 1101 순서대로 저장됨
	
	//__________________________________________________________
	//...
	int cnt=0,i;
	
	for (i=sizeof(binary)/sizeof(binary[0])-1;i>=0;i--){
		decimal+=binary[i]<<cnt;
		cnt++;
	} 
	//__________________________________________________________
	
	printf("%d\n", decimal);
}

/**
실행 결과
13
**/ 
