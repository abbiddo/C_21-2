/**
프로그램명 : practice06.c
설명 : 배열의 최솟값, 최댓값 출력 
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
void min_max(int *arr, int *min, int *max, int length);

int main(){
	int arr[100],n,num,i,length=0,min,max;
	
	scanf("%d",&n);
	printf("Enter a sequence of positive integers.\n");
	
	for (i=0;i<n;i++){
		scanf("%d",&num);                                     // n번 입력 받기 
		
		if (num>=0 && i==length) arr[length++]=num;           // 입력받은 수가 음수가 아니고 반복횟수랑 인덱스값이 같으면 입력받은 수를 배열에 저장 
	}
	
	min=max=arr[0];                                           // min과 max값을 배열의 첫 번째 값으로 설정 
	min_max(arr,&min,&max,length);
	
	printf("Minimum is %d, Maximum is %d.",min,max);
}

void min_max(int *arr, int *min, int *max, int length){
	int i=1;
	
	for (i;i<length;i++){
		if (*min>*(arr+i)) *min=*(arr+i);                      // 최솟값 탐색 
		if (*max<*(arr+i)) *max=*(arr+i);                      // 최댓값 탐색 
	}
}
