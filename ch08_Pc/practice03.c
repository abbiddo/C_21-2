/**
���α׷��� : practice03.c
���� : ������ �ԷµǱ� �� ���� �Է¹��� ����� a�迭�� ���� �� �Ųٷ� b�迭�� ������ ��� 
�ۼ��Ͻ� : 2021.11.07
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
void reverse_array(int *a, int *b, int length);

int main(){
	int i,num,length=0,a[10],b[10];
	printf("Enter a sequence of positive integers.\n");
	
	for (i=0;i<10;i++){
		scanf("%d",&num);                                  // 10�� �Է� �ޱ� 
		
		if (num>0 && i==length) a[length++]=num;           // �Է¹��� ���� ����̰� �ݺ�Ƚ���� �ε������� ������ �Է¹��� ���� �迭�� ���� 
	}
	
	reverse_array(a,b,length);
	
	for (i=0;i<length;i++) printf("%d ",b[i]);             // b�迭 ��� ��� 
} 

void reverse_array(int *a, int *b, int length){
	for (int i=0;i<length;i++) b[i]=a[length-i-1];             // a�迭�� length��° �ε������� 0��° �ε������� b�迭�� ���������� ���� 
}
