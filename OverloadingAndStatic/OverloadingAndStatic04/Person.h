#ifndef __PERSON__H_
#define __PEROSN__H_
#include <string>

using std::string;

class Person {
private:
	string name; // 이름을 저장할 변수 선언
	int num; // 숫자를 저장할 변수 선언

public:
	Person(); // default 생성자 선언
	Person(string name); // 매개변수가 한개인생성자 선언
	void setName(string name); // name을 설정한 함수 선언
	string getName(); // name을 반환할 함수 선언
	void setNum(int num); // num을 설정할 함수 선언
	int getNum(); // num을 반환할 함수 선언
};
#endif