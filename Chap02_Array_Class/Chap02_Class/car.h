#pragma once // 헤더파일을 한번반 불러오게하는 명령어 이게 없으면 중복실행이 되어 충돌이 일어날 수 있음
#include <cstdio>
#include <cstring>

class Car {
private:		// 현재 class 내부에서만 접근 가능


protected:		// 외부에서 접근불가, 자식class에서는 접근 가능
	int speed;	// 속력(speed)
	char name[40];		// 이름
public:			//외부 접근 가능
	
	int gear;
	Car() : speed(0), gear(0), name("") {} // 생성자 (Constructor)
	~Car() {}							   // 소멸자
		Car(int s, const char* n, int g)	// 멤버 초기화 리스트
		: speed(s), gear(g) {
		strcpy_s(name, n);		// n 문자열을 name에 copy
	}

	void changeGear(int g = 4) {
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : 기어=%d단, 속도=%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("객체 주소 = %p\n", this);
	}

};