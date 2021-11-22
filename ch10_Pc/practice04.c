/**
프로그램명 : practice04.c
설명 : 3명의 이름, 나이, 성별을 키보드로 입력 받고 나이 혹은 이름 오름차순으로 출력  
작성일시 : 2021.11.22
작성자 : 정소영
**/

#include <stdio.h>
#include <string.h>

typedef struct {         // 익명 구조체 
	char name[20];       // 이름 
	int age;             // 나이 
	char gender;         // 성별 
}Person;

void input(Person p1[],int i);
void output(Person p1[],int i);
void swap_info(Person p1[],int j);

int main(){
	Person p1[3];                // 구조체 배열 선언 
	int i,j,n;
	
	printf("첫번째 사람 : ");
	input(p1,0);                 // 첫번째 사람 입력 
	
	printf("두번째 사람 : ");
	input(p1,1);                 // 두번째 사람 입력  
	
	printf("세번째 사람 : ");
	input(p1,2);                 // 세번째 사람 입력 
	
	printf("1. 나이순 2. 이름순? ");
	scanf("%d",&n);
	
	if (n==1)                    // 1 (나이순) 선택
		// 버블 정렬 
		for (i=0;i<3;i++)
			for (j=0;j<3-i-1;j++)
				if (p1[j].age>p1[j+1].age) swap_info(p1,j);
				//조건에 맞으면 swap_info 함수 실행

	if (n==2)                    // 2 (이름순) 선택
		// 버블 정렬 
		for (i=0;i<3;i++)
			for (j=0;j<3-i-1;j++)
				if (strcmp(p1[j].name,p1[j+1].name)==1) swap_info(p1,j);
				//조건에 맞으면 swap_info 함수 실행 
		
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

void swap_info(Person p1[],int j){
	int temp;
	char tmp[20],tp;
	
	temp=p1[j].age;                     // 나이 위치 바꾸기 
	p1[j].age=p1[j+1].age;
	p1[j+1].age=temp;
			
	strcpy(tmp,p1[j].name);             // 이름 위치 바꾸기 
	strcpy(p1[j].name,p1[j+1].name);
	strcpy(p1[j+1].name,tmp);
				
	tp=p1[j].gender;                    // 성별 위치 바꾸기 
	p1[j].gender=p1[j+1].gender;
	p1[j+1].gender=tp;
}
