/**
프로그램명 : example07.c
설명 : 배열의 값들을 거꾸로 출력 / 배열 명에 값을 더하는 포인터 표현 사용 
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	double ary[]={1.5, 20.1, 16.4, 2.3, 3.5};
	double sum=0.0;
	int i,cnt=sizeof(ary)/sizeof(ary[0]);
	
	for (i=cnt-1;i>=0;i--)
		printf("%.1lf ",*(ary+i));
}

/**
실행 결과
3.5 2.3 16.4 20.1 1.5
**/ 
