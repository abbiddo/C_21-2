/**
프로그램명 : example09.c
설명 : 5개의 숫자를 입력 받고, 오름차순으로 정렬하여 출력하기 
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int num[5],i,j,temp;
	int cnt=sizeof(num)/sizeof(num[0]);
	printf("5개의 정수 입력 : ");
	
	for (i=0;i<cnt;i++)
		scanf("%d",&num[i]); 
	
	for (i=0;i<cnt-1;i++)
		for (j=0;j<cnt-i-1;j++)
			if (num[j]>num[j+1]){
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
			
	for (i=0;i<cnt;i++) printf("%d ",num[i]);
}
 
/**
실행 결과
4 2 5 3 1   #입력 
1 2 3 4 5   #출력 
**/ 
