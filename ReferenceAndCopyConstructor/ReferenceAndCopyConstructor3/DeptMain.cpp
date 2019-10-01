#include <iostream>
#include "Dept.h"

using std::cout;
using std::endl;

int countPass(Dept &dept) { // dept�а��� 60�� �̻����� ����ϴ� �л��� �� �����ϴ� �Լ� ����
	int count = 0; // 60������ ���� ������ �л��� count�� ���� ����

	for (int i = 0; i < dept.getSize(); i++) { // dept�� �迭 size��ŭ ����
		if (dept.isOver60(i)) { // 60������ ���ٸ�
			count++; // count�� �÷���
		}
	}
	
	return count; // count���� ��ȯ
}

int main(void) {
	Dept com(10); // �� 10���� �л��� �ִ� �а� com
	
	com.read(); // �� 10���� �л����� ������ Ű����κ��� �о� socres �迭�� ����
	
	int n = countPass(com); // com�а��� 60������ ���� �������� ����� �л��� �� ����

	cout << "60������ ���� �л��� ���� " << n << "�� �Դϴ�." << endl;

	return 0;
}

// countPass �Լ��� com��ü�� �ѱ�� ����(Call-by-Value)�� ���� �����ڰ� ȣ��ȴ�.
// ���� �����ڰ� ������ default ���� �����ڰ� �����Ϸ��� ���ؼ� ������ �Ǵµ�, �̷� ���
// ��ü�� �Ҹ��� �� ������ �߻��Ѵ�. (�޸𸮸� �����ϰ� �Ǵµ�, �Ҵ���� �޸𸮸� 2�� ��ȯ�ϰ� �ǹǷ�)