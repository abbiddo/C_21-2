/**
���α׷��� : practice03.c
���� : ���� �� ���� 3 ���� �̻� ���� �� 10% ���� �� ���� �ݾ� ��� 
�ۼ��Ͻ� : 2021.09.22
�ۼ��� : ���ҿ�
**/

#include <stdio.h>
int main(){
	int apple=1000, grape=3000, pear=2000, tangerine=500;                             // �� ������ ���� 
	int appleNum=0, grapeNum=0, pearNum=0, tangerineNum=0, money=0;                   // ���ϵ��� ���� ���� 
	
	printf("��� ���� : ");
	scanf("%d",&appleNum); 
	printf("���� ���� : ");
	scanf("%d",&grapeNum); 
	printf("�� ���� : ");
	scanf("%d",&pearNum); 
	printf("�� ���� : ");
	scanf("%d",&tangerineNum);
	
	money=apple*appleNum + grape*grapeNum + pear*pearNum + tangerine*tangerineNum;    // ���ΰ� ��� ���� ���� ���� ��� 
	
	if (grapeNum>=3) printf("\n����(10%% ����) : %.0f��",money*0.9);                  // ���� 3 ���� �̻� ���� �� 10% ���ε� �ݾ� ��� 
	else printf("���� : %d��",money);                                                 // �ƴϸ� ���� ���� ���� ��� 
}
