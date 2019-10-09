#include "Random.h"

int Random::maxNum = 32767; // 랜덤범위의 최대값을 32767로 초기화

int Random::nextInt(int min, int max) { // min과 max사이의 랜덤 정수를 리턴하는 함수 정의
	return (rand() % ( max - min + 1)) + min;
}

char Random::nextAlphabet() { // 랜덤 알파벳을 리턴하기 위한 함수 정의
	int select; // 대소문자 판별하기 위한 변수
	char ranChar; // 임의의 알파벳을 저장하기 위한 변수

	select = rand() % 2; // 짝수이면 대문자, 홀수이면 소문자
	select == 0 ? ranChar = (char)(nextInt(65, 90)) : ranChar = (char)(nextInt(97, 122)); // 삼항연산자를 이용하여 참이면 대문자, 거짓이면 소문자

	return ranChar; // 문자 반환
}

double Random::nextDouble() { // 0보다 크거나 같고 1보다 작은 실수를 리턴하기 위한 함수 정의
	return (double)rand() / maxNum;
}