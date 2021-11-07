/**
프로그램명 : example06.c
설명 : 배열의 평균값 출력 / 배열 명에 값을 더하는 포인터 표현 사용 
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	double ary[]={1.5, 20.1, 16.4, 2.3, 3.5};
	double sum=0.0;
	int i,cnt=sizeof(ary)/sizeof(ary[0]);
	
	for (i=0;i<cnt;i++)
		sum+=*(ary+i);
		
	printf("평균값 : %.2lf",sum/cnt);
}

/**
실행 결과
평균값 : 8.76
**/ 
