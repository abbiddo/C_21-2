/**
���α׷��� : practice02.c
���� : ���� �Է� ������ �Է� �ް�, �Է� ���� �� ���� �ּڰ� ���� �� ��� 
�ۼ��Ͻ� : 2021.09.27
�ۼ��� : ���ҿ� 
**/

#include <stdio.h>
int current_min(int n);          // current_min �Լ� ���� 

int main(){
	int num=0;
	while(num>=0){               // num�� 0 �̻��� ��츸 �ݺ� 
		printf("Enter a number.\n");
		scanf("%d",&num);
		if (num>=0)	             // num�� 0 �̻��� ��� �Լ� ���� �� ��� ��� 
			printf("Current min is %d.\n",current_min(num));
	}	
}

int current_min(int n){
	static int min=100;          // ���� ���� ���� 
	if (n<min) min=n;            // ���� �Է��� ���� ������ min�� ��ȯ
	return min;       	         // min�� ��ȯ 
}
