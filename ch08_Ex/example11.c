/**
���α׷��� : example11.c
���� : ������ ó�� ��µǵ��� �ش� �ҽ� �ڵ��� ��ĭ�� ä����   
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main() {
	int num1 = 0;
	
	for (int i = 0;i < 5;i++){
		for (int j = 0; j < 5; j++){
			if (num1 == 10)
				//goto _____
				goto EXIT2;
			num1++;
		}
	}	
	
	EXIT1:
		printf("100\n");
	EXIT2:
		printf("200\n");
	EXIT3:
		printf("300\n");
		return 0;
}

/**
���� ���
200
300 
**/ 
