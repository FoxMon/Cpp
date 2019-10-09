#ifndef __PERSON__H_
#define __PERSON__H_
#include <string>

using std::string;

class Person {
private:
	int id; // ID를 저장할 변수
	double weight; // 무게를 저장할 변수
	string name; // Person의 이름 저장할 변수

public:
	Person(); // default생성자  선언
	Person(int id, string name);  // 매개변수가 2개인 생성자 선언
	Person(int id, string name, double weight); // 매개변수가 3개인 생성자 선언
	void show(); // Person의 정보 출력하는 함수 선언
};
#endif