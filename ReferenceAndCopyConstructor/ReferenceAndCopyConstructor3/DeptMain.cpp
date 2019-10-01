#include <iostream>
#include "Dept.h"

using std::cout;
using std::endl;

int countPass(Dept &dept) { // dept학과에 60점 이상으로 통과하는 학생의 수 리턴하는 함수 정의
	int count = 0; // 60점보다 높은 점수의 학생을 count할 변수 선언

	for (int i = 0; i < dept.getSize(); i++) { // dept의 배열 size만큼 실행
		if (dept.isOver60(i)) { // 60점보다 높다면
			count++; // count를 올려줌
		}
	}
	
	return count; // count변수 반환
}

int main(void) {
	Dept com(10); // 총 10명의 학생이 있는 학과 com
	
	com.read(); // 총 10명의 학생들의 성적을 키보드로부터 읽어 socres 배열에 저장
	
	int n = countPass(com); // com학과에 60점보다 높은 성적으로 통과한 학생의 수 리턴

	cout << "60점보다 높은 학생의 수는 " << n << "명 입니다." << endl;

	return 0;
}

// countPass 함수로 com객체를 넘기는 순간(Call-by-Value)에 복사 생성자가 호출된다.
// 복사 생성자가 없으면 default 복사 생성자가 컴파일러에 의해서 삽입이 되는데, 이런 경우
// 객체가 소멸할 때 문제가 발생한다. (메모리를 공유하게 되는데, 할당받은 메모리를 2번 반환하게 되므로)