/**
���α׷��� : example08.c
���� : �迭�� �ּڰ� / �迭�� ���� �����Ͽ� �ּҰ��� �����ϴ� �Լ� ���� 
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
double findMin(double *ary, int count);
 
int main(){
	double ary[]={1.5, 20.1, 16.4, 2.3, 3.5};
	int cnt=sizeof(ary)/sizeof(ary[0]);
	
	printf("�迭�� �ּڰ� : %.1lf",findMin(ary, cnt));	
}

double findMin(double *ary, int count){
	double min=*ary;
	
	for (int i=1;i<count;i++)
		if (ary[i]<min) min=ary[i];
		
	return min;
}

/**
���� ���
�迭�� �ּڰ� : 1.5
**/ 
