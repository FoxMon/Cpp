#include <iostream>

using std::cout;
using std::endl;

template<class T> 
void reverseArray(T arr[], int size) { // 배열의 원소 순서를 뒤집는 제네릭 함수 정의
	T temp; // 제네릭 타입 변수 선언

	for (int i = 0; i < size / 2; i++) { // 개수의 절반만 실행하면 됨
		temp = arr[i]; // temp에 i번째 원소 대입
		arr[i] = arr[size - 1 - i]; // 마지막 원소와 바꿔줌 ( 마지막 원소는 1씩 감소 )
		arr[size - 1 - i] = temp; // 마지막 원소와 첫번째 원소 스왑 ( 인덱스를 하나씩 옮겨가며 스왑 수행 )
	}
}

int main(void) {
	int x[] = { 1, 10, 100, 5, 4 }; // 배열 선언과 동시에 초기화

	reverseArray(x, 5); // 제네릭 함수 호출
	
	for (int i = 0; i < 5; i++) { // 뒤집힌 배열의 원소 출력
		cout << x[i] << ' ';
	}

	cout << endl;

	return 0;
}