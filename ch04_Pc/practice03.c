/**
���α׷��� : practice03.c
���� : �Է��� ���� ��� ���ϱ� 
�ۼ��Ͻ� : 2021.09.22
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main(){
    int n=0,i=1;
	printf("Enter a natural number.\n");
	scanf("%d",&n); 
	
	for (i;i<=n;i++)                       // 1~n �ݺ� 
		if (n%i==0) printf("%d ",i);       // i�� n���� ������ �������� ��� 
			
}

