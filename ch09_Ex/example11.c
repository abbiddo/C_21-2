/**
프로그램명 : example11.c
설명 : 실행결과에 맞게 해당 소스 코드의 빈칸을 채워라   
작성일시 : 2021.11.11
작성자 : 정소영
**/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
int main(){
	char *s1=" Wonderland";
	char *s2=malloc(sizeof(char)*30);
	
	//______________________
	strcpy(s2,"Alice in");
	//______________________
	strcat(s2,s1);	
		
	printf("%s\n",s2);
	
	free(s2);
	
	return 0;
}

/**
실행 결과
Alice in Wonderland
**/ 
