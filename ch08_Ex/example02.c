/**
���α׷��� : example02.c
���� : �Է� ���� �� ���� �� ��� / �ش� �ҽ� �ڵ��� ��ĭ�� ä����  
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1;
	int num2;
	
	//_________________________________
	int *numPtr1=malloc(sizeof(int)); 
	//_________________________________
	int *numPtr2=malloc(sizeof(int));
	 
	scanf("%d %d", &num1, &num2);
	*numPtr1 = num1;
	*numPtr2 = num2;
	printf("%d\n", *numPtr1 + *numPtr2);
	
	free(numPtr1);
	free(numPtr2);
}

/**
���� ���
10 20     #�Է�
30        #��� 
**/ 
