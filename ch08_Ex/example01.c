/**
프로그램명 : example01.c
설명 : 포인터 변수를 작성하고, swap함수를 만들어 두 수를 변경해라 
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
void swap(double *pa, double *pb);

int main(){
	double a=1.3, b=1.7;
	double *pa=&a;
	double *pb=&b;
	printf("변경 전 - a : %.1lf, b : %.1lf\n",a,b);

	swap(pa,pb);
	printf("변경 전 - a : %.1lf, b : %.1lf",a,b);
}
 
void swap(double *pa, double *pb){
	*pa=*pa+*pb;
	*pb=*pa-*pb;
	*pa=*pa-*pb;	
}

/**
실행 결과
변경 전 - a : 1.3, b : 1.7
변경 후 - a : 1.7, b : 1.3  
**/
