/**
���α׷��� : example06.c
���� : �迭�� ��հ� ��� / �迭 �� ���� ���ϴ� ������ ǥ�� ��� 
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main(){
	double ary[]={1.5, 20.1, 16.4, 2.3, 3.5};
	double sum=0.0;
	int i,cnt=sizeof(ary)/sizeof(ary[0]);
	
	for (i=0;i<cnt;i++)
		sum+=*(ary+i);
		
	printf("��հ� : %.2lf",sum/cnt);
}

/**
���� ���
��հ� : 8.76
**/ 
