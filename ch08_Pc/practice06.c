/**
���α׷��� : practice06.c
���� : �迭�� �ּڰ�, �ִ� ��� 
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
void min_max(int *arr, int *min, int *max, int length);

int main(){
	int arr[100],n,num,i,length=0,min,max;
	
	scanf("%d",&n);
	printf("Enter a sequence of positive integers.\n");
	
	for (i=0;i<n;i++){
		scanf("%d",&num);                                     // n�� �Է� �ޱ� 
		
		if (num>=0 && i==length) arr[length++]=num;           // �Է¹��� ���� ������ �ƴϰ� �ݺ�Ƚ���� �ε������� ������ �Է¹��� ���� �迭�� ���� 
	}
	
	min=max=arr[0];                                           // min�� max���� �迭�� ù ��° ������ ���� 
	min_max(arr,&min,&max,length);
	
	printf("Minimum is %d, Maximum is %d.",min,max);
}

void min_max(int *arr, int *min, int *max, int length){
	int i=1;
	
	for (i;i<length;i++){
		if (*min>*(arr+i)) *min=*(arr+i);                      // �ּڰ� Ž�� 
		if (*max<*(arr+i)) *max=*(arr+i);                      // �ִ� Ž�� 
	}
}
