/**
프로그램명 : practice02.c
설명 : 배열의 평균을 구하는 두 함수 작성하기 (배열 기호 / 포인터 산술 연산) 
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h> 
double average_by_array(int p[], int length);
double average_by_pointer(int *p, int length);
	
int main() {
	int arr[5] = { 10, 40, 50, 20, 15 };
	printf("%lf\n", average_by_array(arr, 5));
	printf("%lf\n", average_by_pointer(arr, 5));
	return 0;
}

double average_by_array(int p[], int length){
	int i;
	double sum=0.0;
	
	for (i=0; i < length; i++)
		sum+=p[i];                                  // 배열 기호를 이용해 배열의 요소에 접근 
	
	return (sum/length);                            // 평균 반환 
}

double average_by_pointer(int *p, int length){
	int i;
	double sum=0.0;
	
	for (i=0; i < length; i++)
		sum+=*(p+i);                                // 포인터 산술 연산을 이용해 배열의 요소에 접근 
	
	return (sum/length);                            // 평균 반환 
} 
