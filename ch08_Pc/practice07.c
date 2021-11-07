/**
프로그램명 : practice07.c
설명 : 2차원 동적 배열 생성, 해당 데이터 제곱값 출력 
작성일시 : 2021.11.07
작성자 : 정소영
**/

#include <stdio.h>
#include <stdlib.h>                                     // malloc, free 함수가 선언된 헤더 파일 
int main(){
	int row,col,**arr,i,j; 
	
	printf("Enter row and column.\n");
	scanf("%d %d",&row,&col);
	
	arr=malloc(sizeof(int *)*row);                      // 이중 포인터에 동적 메모리 할당 
	
	for(i=0;i<row;i++) arr[i]=malloc(sizeof(int)*col);  // 동적 메모리 할당 
	
	printf("Enter the value of array elements.\n");
	
	for(i=0;i<row;i++)                                  // 값 입력 
		for (j=0;j<col;j++)
			scanf("%d",&arr[i][j]);

	printf("The result is, \n");
	
	for(i=0;i<row;i++){                                 // 각 요소의 제곱값 출력 
		for (j=0;j<col;j++)
			printf("%d ",arr[i][j]*arr[i][j]);
		printf("\n");
	}	
	
	for(i=0;i<row;i++)                                  // 2차원 배열의 가로 공간 메모리 해제 
		free(arr[i]);
			
	free(arr);                                          // 2차원 배열의 세로 공간 메모리 해제
}
