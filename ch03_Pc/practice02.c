/**
���α׷��� : practice02.c
���� : ���� �Է� �� �� ���� ������ ��� 
�ۼ��Ͻ� : 2021.09.22
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main(){
	int num=1;                                              // num ������ 1�� �ʱ�ȭ (0���� �ϸ� while�� ���� X) 
	while (num!=0) {
		printf("��� �Է� : ");
		scanf("%d",&num);
		
		if (num>0) printf("%d\n",num*num);                  // num�� ����̸� ������ ��� 
		else if (num<0) printf("����� �Է��ϼ���.\n");     // num�� �����̸� �ȳ��� ��� (else �̿� -> 0�Է� �� �ȳ��� ���) 
	}
}
