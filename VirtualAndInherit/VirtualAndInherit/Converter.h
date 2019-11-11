#ifndef __CONVERTER__H_
#define __CONVERTER__H_
#include <string>

using std::string;

class Converter { // 추상 클래스 선언부
protected:
	double ratio; // 비율을 저장하는 변수
	
	virtual double convert(double src) = 0; // src를 다른 단위로 변환하는 순수 가상 함수
	virtual string getSourceString() = 0; // src 단위 명칭을 반환하는 순수 가상 함수
	virtual string getDestString() = 0; // dest 단위 명칭을 반환하는 순수 가상 함수

public:
	Converter(double ratio); // 매개변수를 한 개 가진 Converter생성자 선언
	void run(); // 변환기를 실행시키는 함수 선언
};
#endif