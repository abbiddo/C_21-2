/**
���α׷��� : practice02.c
���� : 1���� n������ �� (5�� ��� ����) 
�ۼ��Ͻ� : 2021.09.22
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main(){
    int n=0,sum=0,num=0,i=1;
	printf("Enter a natural number.\n");
	scanf("%d",&n);
	
	for(i;i <= n;i++){           // 1���� n���� �� 
		if(i % 5 == 0) continue; // 5 ���� 
		sum+=i;
	}
	
	printf("The sum is %d.",sum);  
}

