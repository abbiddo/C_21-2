/**
���α׷��� : practice04.c
���� : ��� ȣ��� �Է� ���� ��ŭ * ��� 
�ۼ��Ͻ� : 2021.09.27
�ۼ��� : ���ҿ� 
**/

#include <stdio.h>
int asterisk(int n);           // asterisk �Լ� ���� 

int main(){
	int n;
	printf("Enter the number of asterisk.\n");
	scanf("%d",&n);
	
	while(n<=0){               // n�� 0�����̸� ���Է� ���� 
		printf("Please enter it again.\n");
		printf("Enter the number of asterisk.\n");
		scanf("%d",&n);
	}
	
	asterisk(n);              // asterisk �Լ� ȣ��
}

int asterisk(int n){
	if (n==0) return 0;       // n�� 0�̸� 0 ��ȯ
	printf("*");              
	return asterisk(n-1);     // asterisk(n-1) �� ȣ�� 
}
