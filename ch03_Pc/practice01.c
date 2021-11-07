/**
프로그램명 : practice01.c
설명 : 입력한 정수에 따라 적절한 메시지 출력 
작성일시 : 2021.09.22
작성자 : 정소영
**/

#include <stdio.h>
int main(){
	int score=1;                                                           // score 변수를 1로 초기화 (0으로 하면 while문 실행 X) 
	while (score!=0){
		printf("정수를 입력 : ");
		scanf("%d",&score);
		
		if (score<0) printf("입력한 값은 0보다 작습니다.\n");              // score가 0이하면 해당 메시지 출력 
		else if (score<10) printf("입력한 값은 0이상 10미만입니다.\n");    // score가 0이상 10미만이면 해당 메시지 출력 
		else if (score<20) printf("입력한 값은 10이상 20미만입니다.\n");   // score가 10이상 20미만이면 해당 메시지 출력 
		else if (score<30) printf("입력한 값은 20이상 30미만입니다.\n");   // score가 20이상 30미만이면 해당 메시지 출력 
		else printf("입력한 값은 30이상입니다.\n");                        // socre가 30이상이면 해당 메시지 출력 
	}
}

/**
실행 결과
29                                #입력
입력한 값은 20이상 30미만입니다.   #출력
**/
