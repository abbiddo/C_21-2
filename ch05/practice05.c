/**
���α׷��� : practice05.c
���� : ��� �Լ��� a�� b���� ��� 
�ۼ��Ͻ� : 2021.09.27
�ۼ��� : ���ҿ� 
**/

#include <stdio.h>
int square(int a, int b);           // square �Լ� ���� 

int main(){
	int a,b;
	printf("Enter vase and mutiplier\n");
	scanf("%d %d",&a,&b);
	printf("%d to the power of %d is %d",a,b,square(a,b));   // square �Լ� ȣ�� �� ��ȯ �� ��� 
}

int square(int a, int b){
	if (b==1) return a;             // b�� 1�̸� a��ȯ 
	return a*square(a,b-1);         // square(a,b-1) ȣ�� �� a�� ���� �� ��� 
}
	
