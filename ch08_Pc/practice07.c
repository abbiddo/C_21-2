/**
���α׷��� : practice07.c
���� : 2���� ���� �迭 ����, �ش� ������ ������ ��� 
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
#include <stdlib.h>                                     // malloc, free �Լ��� ����� ��� ���� 
int main(){
	int row,col,**arr,i,j; 
	
	printf("Enter row and column.\n");
	scanf("%d %d",&row,&col);
	
	arr=malloc(sizeof(int *)*row);                      // ���� �����Ϳ� ���� �޸� �Ҵ� 
	
	for(i=0;i<row;i++) arr[i]=malloc(sizeof(int)*col);  // ���� �޸� �Ҵ� 
	
	printf("Enter the value of array elements.\n");
	
	for(i=0;i<row;i++)                                  // �� �Է� 
		for (j=0;j<col;j++)
			scanf("%d",&arr[i][j]);

	printf("The result is, \n");
	
	for(i=0;i<row;i++){                                 // �� ����� ������ ��� 
		for (j=0;j<col;j++)
			printf("%d ",arr[i][j]*arr[i][j]);
		printf("\n");
	}	
	
	for(i=0;i<row;i++)                                  // 2���� �迭�� ���� ���� �޸� ���� 
		free(arr[i]);
			
	free(arr);                                          // 2���� �迭�� ���� ���� �޸� ����
}
