/**
���α׷��� : practice03.c
���� : ��� ȣ��� �Է� ���� ���� n���� -1������ �� ��� 
�ۼ��Ͻ� : 2021.09.27
�ۼ��� : ���ҿ� 
**/

#include <stdio.h>
int minus_sum(int n);          // minus_sum �Լ� ���� 

int main(){
	int n;
	printf("Enter n.\n");
	scanf("%d",&n);
	
	while(n>=0){               // n�� 0�̻��̸� ���Է� ���� 
		printf("Please enter it again.\n");
		printf("Enter n.\n");
		scanf("%d",&n);
	}
	
	printf("The sum is %d.",minus_sum(n));   // minus_sum �Լ� ȣ�� �� ��ȯ�� ��� 
}

int minus_sum(int n){
	if (n==-1) return -1;      // n�� -1�̸� -1��ȯ 
	return n+minus_sum(n+1);   // minus_sum(n+1)�� ȣ�� ���� n�� ���� �� ��ȯ  
}

