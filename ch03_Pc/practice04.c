/**
���α׷��� : practice04.c
���� : �� ���� ����� ���� ¦���� ���� ū ��, Ȧ���� �� ��� 
�ۼ��Ͻ� : 2021.09.22
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main(){
	int num1=0, num2=0, num3=0, sum=0;
	
	printf("�� ���� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	sum=num1+num2+num3;                  // �� ���� ���� �� 
	
	if (sum%2==0){                       // ���� ¦���� �� 
		if (num1>=num2)                  // num1�� num2 ���� ũ�ų� ���� 
			if (num1>=num3)              // num3 ���� ũ�ų� ���� �� 
				printf("���� ¦��, ���� ū ���� %d",num1);
			else                         // num3�� num1 ���� Ŭ �� 
				printf("���� ¦��, ���� ū ���� %d",num3);
				
		else                             // num2�� num1 ���� ũ�� 
			if (num2>=num3)              // num3 ���� ũ�ų� ���� �� 
				printf("���� ¦��, ���� ū ���� %d",num2);	
			else                         // num3�� num2 ���� Ŭ �� 
				printf("���� ¦��, ���� ū ���� %d",num3);
	}
	else                                 // ���� Ȧ���� �� 
		printf("���� Ȧ��, ���� %d",sum);
	
}
