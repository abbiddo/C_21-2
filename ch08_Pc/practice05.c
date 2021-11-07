/**
프로그램명 : practice05.c
설명 : 두 배열의 값을 입력하고 두 배열의 값 바꾸기 
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
void print_array(int *arr, int length);
void swap_array(int *a, int*b, int length);

int main(){
	int arr1[5], arr2[5],i;
	
	printf("Enter the contents of first array.\n");         
	for (i=0;i<5;i++) scanf("%d",&arr1[i]);             // arr1 입력 받기 
	
	printf("Enter the contents of second array.\n");
	for (i=0;i<5;i++) scanf("%d",&arr2[i]);             // arr2 입력 받기
	
	printf("Before swapping,\nfirst: ");
	print_array(arr1,5);                                // arr1 출력 
	
	printf("second: ");
	print_array(arr2,5);                                // arr2 출력 
	
	swap_array(arr1, arr2, 5);                          // arr1 arr2 바꾸기 
	
	printf("After swapping,\nfirst: ");
	print_array(arr1,5);                                // arr1 출력 
	
	printf("second: ");
	print_array(arr2,5);                                // arr2 출력 
}

void print_array(int *arr, int length){
	for (int i=0;i<length;i++) printf("%d ",*(arr+i));  // 배열 출력 
	printf("\n");
}

void swap_array(int *a, int*b, int length){            
	for (int i=0;i<length;i++){                         // 인덱스 값이 같은 값끼리 교환 
		*(a+i)=*(a+i)+*(b+i);
		*(b+i)=*(a+i)-*(b+i);
		*(a+i)=*(a+i)-*(b+i);
	}
}
