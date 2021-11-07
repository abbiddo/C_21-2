/**
프로그램명 : practice03.c
설명 : 음수가 입력되기 전 까지 입력받은 양수를 a배열에 저장 후 거꾸로 b배열에 저장해 출력 
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
void reverse_array(int *a, int *b, int length);

int main(){
	int i,num,length=0,a[10],b[10];
	printf("Enter a sequence of positive integers.\n");
	
	for (i=0;i<10;i++){
		scanf("%d",&num);                                  // 10번 입력 받기 
		
		if (num>0 && i==length) a[length++]=num;           // 입력받은 수가 양수이고 반복횟수랑 인덱스값이 같으면 입력받은 수를 배열에 저장 
	}
	
	reverse_array(a,b,length);
	
	for (i=0;i<length;i++) printf("%d ",b[i]);             // b배열 요소 출력 
} 

void reverse_array(int *a, int *b, int length){
	for (int i=0;i<length;i++) b[i]=a[length-i-1];             // a배열의 length번째 인덱스부터 0번째 인덱스까지 b배열에 순차적으로 저장 
}
