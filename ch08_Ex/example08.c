/**
프로그램명 : example08.c
설명 : 배열의 최솟값 / 배열의 값을 참조하여 최소값을 리턴하는 함수 생성 
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
double findMin(double *ary, int count);
 
int main(){
	double ary[]={1.5, 20.1, 16.4, 2.3, 3.5};
	int cnt=sizeof(ary)/sizeof(ary[0]);
	
	printf("배열의 최솟값 : %.1lf",findMin(ary, cnt));	
}

double findMin(double *ary, int count){
	double min=*ary;
	
	for (int i=1;i<count;i++)
		if (ary[i]<min) min=ary[i];
		
	return min;
}
 
/**
실행 결과
배열의 최솟값 : 1.5
**/ 
