/**
���α׷��� : practice04.c
���� : a�� b���� ��� 
�ۼ��Ͻ� : 2021.09.22
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main(){
    int a=0,b=0,i=1,result=1;
	printf("Enter base and power.\n");
	scanf("%d %d",&a,&b); 
	
	for (i;i<=b;i++)                       // b��ŭ �ݺ� 
		result*=2;                         // result ���� 2�� ���� 
	
	printf("%d to the power of %d is %d\n",a,b,result);
}

