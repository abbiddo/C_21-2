/**
���α׷��� : example07.c
���� : �迭�� ������ �Ųٷ� ��� / �迭 �� ���� ���ϴ� ������ ǥ�� ��� 
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main(){
	double ary[]={1.5, 20.1, 16.4, 2.3, 3.5};
	double sum=0.0;
	int i,cnt=sizeof(ary)/sizeof(ary[0]);
	
	for (i=cnt-1;i>=0;i--)
		printf("%.1lf ",ary[i]);
}

/**
���� ���
3.5 2.3 16.4 20.1 1.5
**/ 
