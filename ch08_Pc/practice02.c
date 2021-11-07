/**
���α׷��� : practice02.c
���� : �迭�� ����� ���ϴ� �� �Լ� �ۼ��ϱ� (�迭��ȣ / ������ ��� ����) 
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h> 
double average_by_array(int p[], int length);
double average_by_pointer(int *p, int length);
	
int main() {
	int arr[5] = { 10, 40, 50, 20, 15 };
	printf("%lf\n", average_by_array(arr, 5));
	printf("%lf\n", average_by_pointer(arr, 5));
	return 0;
}

double average_by_array(int p[], int length){
	int i;
	double sum=0.0;
	
	for (i=0; i < length; i++)
		sum+=p[i];                                  // �迭 ��ȣ�� �̿��� �迭�� ��ҿ� ���� 
	
	return (sum/length);                            // ��� ��ȯ 
}

double average_by_pointer(int *p, int length){
	int i;
	double sum=0.0;
	
	for (i=0; i < length; i++)
		sum+=*(p+i);                                // ������ ��� ������ �̿��� �迭�� ��ҿ� ���� 
	
	
	return (sum/length);                            // ��� ��ȯ 
} 

