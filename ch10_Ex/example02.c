/**
프로그램명 : example02.c
설명 : 실행결과에 맞게 해당 소스 코드의 빈칸을 채워라   
작성일시 : 2021.11.23
작성자 : 정소영
**/

#include <stdio.h>

//typedef______________
//_____________________
//_____________________
//_____________________

typedef struct _Point2D{
	int x;
	int y;;
} Point2D;

int main(){
	//Point2D _____;
	Point2D p1;
	
	p1.x = 10;
	//_______________
	p1.y = 20;
	
	printf("%d %d\n", p1.x, p1.y);
	return 0;
}

/**
실행 결과
10 20
**/ 
