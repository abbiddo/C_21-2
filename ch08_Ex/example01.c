/**
���α׷��� : example01.c
���� : ������ ������ �ۼ��ϰ�, swap�Լ��� ����� �� ���� �����ض� 
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
void swap(double *pa, double *pb);

int main(){
	double a=1.3, b=1.7;
	double *pa=&a;
	double *pb=&b;
	printf("���� �� - a : %.1lf, b : %.1lf\n",a,b);

	swap(pa,pb);
	printf("���� �� - a : %.1lf, b : %.1lf",a,b);
}

void swap(double *pa, double *pb){
	*pa=*pa+*pb;
	*pb=*pa-*pb;
	*pa=*pa-*pb;	
}

/**
���� ���
���� �� - a : 1.3, b : 1.7
���� �� - a : 1.7, b : 1.3  
**/
