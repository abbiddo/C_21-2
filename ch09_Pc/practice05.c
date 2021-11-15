/**
프로그램명 : practice05.c
설명 : strcat함수와 동일한 역할을 하는 my_strcat 함수 작성 
작성일시 : 2021.11.12
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>
char* my_strcat(char *dest, char *src);

int main(){
	char dest[100];
	char src[30];
	
	while(1){
		printf("문자열 입력 : ");                        
		scanf("%s",dest);
		
		if (strcmp(dest, "quit")==0) break;        		 // quit이 입력되면 반복문 종료 
		
		printf("문자열 입력 : ");                        
		scanf("%s",src);
		
		if (strcmp(src, "quit")==0) break;        		 // quit이 입력되면 반복문 종료
		
		printf("%s\n",my_strcat(dest,src));              // 함수 호출과 반환값 출력 
	}
	
	printf("프로그램 종료");
}

char* my_strcat(char *dest, char *src){
	int length=strlen(dest),i,k=0;
	
	dest[length]=' ';                                    // dest의 문자열 뒤에 공백 추가 
	
	for (i=0;i<strlen(src);i++)                          // src 문자열의 길이만큼 반복 
		dest[i+length+1]=src[i];                         // dest뒤에 src 문자열 붙이기 
	dest[length+strlen(src)+1]='\0';                     // dest 마지막에 문자열 종료를 알리는 NULL 문자 저장 
	
	return dest;
}
