/**
���α׷��� : practice02.c
���� : 8���� �ĺ��� �⸶���� �� 10���� ��ǥ ����� �Է� �ް� �ĺ��� ��ȣ�� �缱 ������ ��� (���ݼ� �̻� ��ǥ�ؾ� �缱) 
�ۼ��Ͻ� : 2021.10.18
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main(){
	int i,max=0,win;
	int vote[10],count[8]={0}; 							// count �迭�� 0���� �ʱ�ȭ 
	printf("Enter the result of voting.\n");
	
	for (i=0;i<sizeof(vote)/sizeof(vote[0]);i++){      	// 10�� �ݺ� 
		printf("%02d. ��ǥ�ϼ��� : ",i+1);				
		scanf("%d",&vote[i]);                           // �迭 vote�� ���� �Է��� ���� 
		count[vote[i]-1]+=1;							// count �迭�� �Է¹��� ��-1 ��° ���� 1�� ������ 
	}

	for (i=0;i<sizeof(count)/sizeof(count[0]);i++){
		if (max<count[i]) {
			max=count[i];
			win=i;
		}
	}
	
	if (count[win]<5) printf("There's no winner");	// ���ݼ� �̻��� �ƴ� �� �缱�� ���� 
	else printf("Number %d is the winner",win+1);			// ���ݼ� �̻� �� �缱�� ��� 
}
