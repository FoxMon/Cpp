#include "KmToMile.h"

// 클래스 구현부

KmToMile::KmToMile(double ratio) // KmToMile생성자 정의
	: Converter(ratio) { } // 기본클래스의 생성자 호출하여 ratio 초기화

// 추상 클래스의 구현 ( 함수 오버라이딩을 이용함 )

double KmToMile::convert(double src) { return src / ratio; } // ( 변환기 ) 정의 
string KmToMile::getSourceString() { return "Km"; } // ( src 단위 명칭 함수 정의 )
string KmToMile::getDestString() { return "Mile"; } // ( dest 단위 명칭 함수 정의 )