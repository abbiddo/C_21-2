/**
���α׷��� : example10.c
���� : ������ ó�� ��µǵ��� �ش� �ҽ� �ڵ��� ��ĭ�� ä����   
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main() {
	int num1 = 1;
	for (int i = 0;i < 10;i++){
		switch (num1) {
			case 1:
				printf("1�Դϴ�.\n");
				//______________
				goto EXIT;
			default:
				break;
		}
	}
	//___________
	EXIT:
		return 0;
}

/**
���� ���
1�Դϴ�. 
**/ 
