/**
���α׷��� : practice03.c
���� : n!�� ����ϴ� ��� �Լ� 
�ۼ��Ͻ� : 2021.10.18
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
void factorial(int n, int *p); 
int main(){
	int n,result=1;										// result�� 1�� �ʱ�ȭ 
	int *ptr=&result;									// ptr ������ ������ result �ּҰ� ���� 
	printf("Enter a natural number.\n");
	scanf("%d",&n);
	
	factorial(n,ptr);									// �Լ��� �Է� ���� n�� result�� �ּҰ��� ����� ptr �Ѱ��� 
	printf("%d factorial is %d.",n,result);
}

void factorial(int n, int *p){
	if (n>0){											// n�� 0���� Ŭ ���� ���� 
		*p*=n;											// result�� n�� ���ؼ� ���� 
		factorial(n-1,p);								// �Լ��� n-1�� result�� �ּҸ� �Ѱ��ִ� ����Լ� 
	}
}
