/**
프로그램명 : practice06.c
설명 : strcpy함수와 동일한 역할을 하는 my_strcpy 함수 작성 
작성일시 : 2021.11.12
작성자 : 정소영
**/

#include <stdio.h>
char * my_strcpy(char * dest, const char * src, int index);

int main(){
	char dest[30];
	char src[30];
	
	while(1){
		printf("source : ");                        
		gets(src);                                       // gets 함수를 이용해 문자열 입력 
		
		if (strcmp(src, "quit")==0) break;        		 // quit이 입력되면 반복문 종료 
		
		my_strcpy(dest,src,0);                           // 함수 호출 
		
		printf("destination : ");
		puts(dest);                                      // puts 함수를 이용해 문자열 출력 
	}
	
	printf("프로그램 종료");
}

char * my_strcpy(char * dest, const char * src, int index){
	dest[index]=src[index];                              // dset에 src문자 저장 
	if (src[index]=='\0') return dest;                   // src[index]가 ‘\0’이면 dest 반환 
	return my_strcpy(dest,src,index+1);                  // index의 값에 1을 더해 재귀 호출 
}
