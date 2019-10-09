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
	Person(int id = 1, string name = "Grace", double weight = 20.5); // default매개변수를 가진 default생성자
	void show(); // Person의 정보 출력하는 함수 선언
};
#endif