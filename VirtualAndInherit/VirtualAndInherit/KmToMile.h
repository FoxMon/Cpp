#ifndef __KMTOMILE__H_
#define __KMTOMILE__H_
#include "Converter.h"

class KmToMile : public Converter { // 클래스 선언부 ( Converter 클래스를 상속받음 )
protected: // 구현되어야 할 순수가상함수
	double convert(double src); // 단위 변환 함수 ( 변환기 )
	string getSourceString();  // src 단위 명칭을 반환하는 함수 ( 바뀌기 전 )
	string getDestString(); // dest 단위 명칭을 반환하는 함수 ( 바뀐 후 )

public:
	KmToMile(double ratio); // KmToMile 생성자 선언
};
#endif