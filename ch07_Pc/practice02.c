/**
���α׷��� : practice02.c
���� : a, b, c ��ȯ ���� 
�ۼ��Ͻ� : 2021.10.18
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
void cyclic_swap(int *a, int *b, int *c); 
int main(){
	int a,b,c;
	printf("Enter three integers a, b, c.\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("Before cyclic swap, a = %d, b = %d, c = %d.\n",a,b,c);
	
	cyclic_swap(&a,&b,&c);													// �Լ��� a,b,c�� �ּҸ� �Ѱ��� 
	printf("After cyclic swap, a = %d, b = %d, c = %d.",a,b,c);             // �Լ����� �ٲ� a,b,c�� ���� ��� 
}

void cyclic_swap(int *a, int *b, int *c){
	int temp;                                
	temp=*a;																// temp ������ �̿��� ������ ������ �ٲ��� 
	*a=*c;
	*c=*b;
	*b=temp;
}
