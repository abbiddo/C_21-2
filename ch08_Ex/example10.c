/**
프로그램명 : example10.c
설명 : 실행결과 처럼 출력되도록 해당 소스 코드의 빈칸을 채워라   
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
int main() {
	int num1 = 1;
	for (int i = 0;i < 10;i++){
		switch (num1) {
			case 1:
				printf("1입니다.\n");
				//______________
				goto EXIT;
			default:
				break;
		}
	}
	//___________
	EXIT:
		return 0;
}
 
/**
실행 결과
1입니다. 
**/ 
