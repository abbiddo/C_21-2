/**
프로그램명 : practice02.c
설명 : a, b, c 순환 스왑 
작성일시 : 2021.10.18
작성자 : 정소영
**/

#include <stdio.h>
void cyclic_swap(int *a, int *b, int *c); 
int main(){
	int a,b,c;
	printf("Enter three integers a, b, c.\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("Before cyclic swap, a = %d, b = %d, c = %d.\n",a,b,c);
	
	cyclic_swap(&a,&b,&c);													// 함수에 a,b,c의 주소를 넘겨줌 
	printf("After cyclic swap, a = %d, b = %d, c = %d.",a,b,c);             // 함수에서 바뀐 a,b,c의 값을 출력 
}

void cyclic_swap(int *a, int *b, int *c){
	int temp;                                
	temp=*a;																// temp 변수를 이용해 각각의 순서를 바꿔줌 
	*a=*c;
	*c=*b;
	*b=temp;
}
