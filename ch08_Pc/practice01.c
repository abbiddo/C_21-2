/**
프로그램명 : practice01.c
설명 : *p와 **q를 선언 후 이용해 num에 데이터 입력 후 출력  
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
int main() {
	int num;
	int *p, **q;                // *p **q 선언 
	p=&num;                     // p에 num주소값 대입 
	q=&p;                       // q에 p주소값 대입 
	
	scanf("%d",p);              // &*p == p
	printf("%d\n",*p);			// *p == num 
	scanf("%d",*q);             // **&q == *q
	printf("%d\n",**q); 	    // **q == num
}
