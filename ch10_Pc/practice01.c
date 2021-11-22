/**
프로그램명 : practice01.c
설명 : 3명의 이름, 나이, 성별을 키보드로 입력 받고 출력  
작성일시 : 2021.11.22
작성자 : 정소영
**/

#include <stdio.h>
typedef struct {         // 익명 구조체 
	char name[20];       // 이름 
	int age;             // 나이 
	char gender;         // 성별 
}Person;

void input(Person p1[],int i);
void output(Person p1[],int i);

int main(){
	Person p1[5];                // 구조체 배열 선언 
	
	printf("첫번째 사람 : ");
	input(p1,0);                 // 첫번째 사람 입력 
	
	printf("두번째 사람 : ");
	input(p1,1);                 // 두번째 사람 입력  
	
	printf("세번째 사람 : ");
	input(p1,2);                 // 세번째 사람 입력 
	
	output(p1,0);                // 첫번째 사람 출력 
	output(p1,1);                // 두번째 사람 출력 
	output(p1,2);                // 세번째 사람 출력 
} 

void input(Person p1[],int i){
	scanf("%s %d %c",&p1[i].name,&p1[i].age,&p1[i].gender);                       // 이름, 나이, 성별 입력 
}

void output(Person p1[],int i){
	if (p1[i].gender=='m') printf("%s은 남자이고 %d살이다.\n",p1[i].name,p1[i].age);    // 남자일 경우 출력 
	else printf("%s은 여자이고 %d살이다.\n",p1[i].name,p1[i].age);                      // 여자일 경우 출력 
}
