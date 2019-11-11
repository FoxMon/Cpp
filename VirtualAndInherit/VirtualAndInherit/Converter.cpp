#include "Converter.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// 클래스 구현부

Converter::Converter(double ratio) { this->ratio = ratio; } // Converter 생성자 정의 ( 단위 비율을 저장 )

void Converter::run() { // 변환기를 실행시키는 함수 정의
	double src; // 변환할 단위를 저장할 함수 ( 지역변수 )

	cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
	cout << getSourceString() << "을 입력하세요>> ";
	cin >> src; // 변환할 값을 입력받고
	cout << "변환 결과 : " << convert(src) << getDestString() << endl; // 변환 결과를 함수에 전달하여 출력
}