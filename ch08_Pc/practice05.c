/**
���α׷��� : practice05.c
���� : �� �迭�� ���� �Է��ϰ� �� �迭�� �� �ٲٱ� 
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
void print_array(int *arr, int length);
void swap_array(int *a, int*b, int length);

int main(){
	int arr1[5], arr2[5],i;
	
	printf("Enter the contents of first array.\n");         
	for (i=0;i<5;i++) scanf("%d",&arr1[i]);             // arr1 �Է� �ޱ� 
	
	printf("Enter the contents of second array.\n");
	for (i=0;i<5;i++) scanf("%d",&arr2[i]);             // arr2 �Է� �ޱ�
	
	printf("Before swapping,\nfirst: ");
	print_array(arr1,5);                                // arr1 ��� 
	
	printf("second: ");
	print_array(arr2,5);                                // arr2 ��� 
	
	swap_array(arr1, arr2, 5);                          // arr1 arr2 �ٲٱ� 
	
	printf("After swapping,\nfirst: ");
	print_array(arr1,5);                                // arr1 ��� 
	
	printf("second: ");
	print_array(arr2,5);                                // arr2 ��� 
}

void print_array(int *arr, int length){
	for (int i=0;i<length;i++) printf("%d ",*(arr+i));  // �迭 ��� 
	printf("\n");
}

void swap_array(int *a, int*b, int length){            
	for (int i=0;i<length;i++){                         // �ε��� ���� ���� ������ ��ȯ 
		*(a+i)=*(a+i)+*(b+i);
		*(b+i)=*(a+i)-*(b+i);
		*(a+i)=*(a+i)-*(b+i);
	}
}
