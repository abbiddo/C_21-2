/**
프로그램명 : example03.c
설명 : 실행결과에 맞게 해당 소스 코드의 빈칸을 채워라   
작성일시 : 2021.11.23
작성자 : 정소영
**/

#include <stdio.h>

struct Dashboard {
	int speed;
	char fuel;
	float mileage;
	int engineTemp;
	int rpm;
};

int main(){
	//__________________
	struct Dashboard d1={.speed=80, .fuel='F', .mileage=5821.442871, .engineTemp=200, .rpm=1830};
	
	printf("Speed: %dkm/h\n", d1.speed);
	printf("Fuel: %c\n", d1.fuel);
	printf("Mileage: %fkm\n", d1.mileage);
	printf("Engine temp: %d℃\n", d1.engineTemp);
	printf("RPM: %d\n", d1.rpm);
	return 0;
}

/**
실행 결과
Speed: 80km/h
Fuel: F
Mileage: 5821.442871km
Engine temp: 200℃
RPM: 1830
**/ 
