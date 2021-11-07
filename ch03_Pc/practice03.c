/**
프로그램명 : practice03.c
설명 : 과일 중 포도 3 송이 이상 구매 시 10% 할인 된 결제 금액 출력 
작성일시 : 2021.09.22
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int apple=1000, grape=3000, pear=2000, tangerine=500;                             // 각 과일의 가격 
	int appleNum=0, grapeNum=0, pearNum=0, tangerineNum=0, money=0;                   // 과일들의 개수 변수 
	
	printf("사과 개수 : ");
	scanf("%d",&appleNum); 
	printf("포도 개수 : ");
	scanf("%d",&grapeNum); 
	printf("배 개수 : ");
	scanf("%d",&pearNum); 
	printf("귤 개수 : ");
	scanf("%d",&tangerineNum);
	
	money=apple*appleNum + grape*grapeNum + pear*pearNum + tangerine*tangerineNum;    // 할인과 상관 없이 과일 가격 계산 
	
	if (grapeNum>=3) printf("\n가격(10%% 할인) : %.0f원",money*0.9);                  // 포도 3 송이 이상 구매 시 10% 할인된 금액 출력 
	else printf("가격 : %d원",money);                                                 // 아니면 할인 없는 가격 출력 
}
