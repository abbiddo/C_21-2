/**
���α׷��� : example09.c
���� : 5���� ���ڸ� �Է� �ް�, ������������ �����Ͽ� ����ϱ� 
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main(){
	int num[5],i,j,temp;
	int cnt=sizeof(num)/sizeof(num[0]);
	printf("5���� ���� �Է� : ");
	
	for (i=0;i<cnt;i++)
		scanf("%d",&num[i]); 
	
	for (i=0;i<cnt-1;i++)
		for (j=0;j<cnt-i-1;j++)
			if (num[j]>num[j+1]){
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
			
	for (i=0;i<cnt;i++) printf("%d ",num[i]);
}

/**
���� ���
4 2 5 3 1   #�Է� 
1 2 3 4 5   #��� 
**/ 
