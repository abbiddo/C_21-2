/**
프로그램명 : example11.c
설명 : 실행결과 처럼 출력되도록 해당 소스 코드의 빈칸을 채워라   
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
int main() {
	int num1 = 0;
	
	for (int i = 0;i < 5;i++){
		for (int j = 0; j < 5; j++){
			if (num1 == 10)
				//goto _____
				goto EXIT2;
			num1++;
		}
	}	
	
	EXIT1:
		printf("100\n");
	EXIT2:
		printf("200\n");
	EXIT3:
		printf("300\n");
		return 0;
}

/**
실행 결과
200
300 
**/ 
