/**
프로그램명 : practice02.c
설명 : 8명의 후보가 출마했을 때 10명의 투표 결과를 입력 받고 후보의 번호나 당선 유무를 출력 (과반수 이상 득표해야 당선) 
작성일시 : 2021.10.18
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int i,max=0,win;
	int vote[10],count[8]={0}; 							// count 배열을 0으로 초기화 
	printf("Enter the result of voting.\n");
	
	for (i=0;i<sizeof(vote)/sizeof(vote[0]);i++){      	// 10번 반복 
		printf("%02d. 투표하세요 : ",i+1);				
		scanf("%d",&vote[i]);                           // 배열 vote에 값을 입력해 저장 
		count[vote[i]-1]+=1;							// count 배열의 입력받은 값-1 번째 값에 1을 더해줌 
	}

	for (i=0;i<sizeof(count)/sizeof(count[0]);i++){
		if (max<count[i]) {
			max=count[i];
			win=i;
		}
	}
	
	if (count[win]<5) printf("There's no winner");	// 과반수 이상이 아닐 시 당선인 없음 
	else printf("Number %d is the winner",win+1);			// 과반수 이상 시 당선인 출력 
}
