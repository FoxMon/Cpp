#include <iostream>

using std::cout;
using std::endl;

template<class T> 
void reverseArray(T arr[], int size) { // �迭�� ���� ������ ������ ���׸� �Լ� ����
	T temp; // ���׸� Ÿ�� ���� ����

	for (int i = 0; i < size / 2; i++) { // ������ ���ݸ� �����ϸ� ��
		temp = arr[i]; // temp�� i��° ���� ����
		arr[i] = arr[size - 1 - i]; // ������ ���ҿ� �ٲ��� ( ������ ���Ҵ� 1�� ���� )
		arr[size - 1 - i] = temp; // ������ ���ҿ� ù��° ���� ���� ( �ε����� �ϳ��� �Űܰ��� ���� ���� )
	}
}

int main(void) {
	int x[] = { 1, 10, 100, 5, 4 }; // �迭 ����� ���ÿ� �ʱ�ȭ

	reverseArray(x, 5); // ���׸� �Լ� ȣ��
	
	for (int i = 0; i < 5; i++) { // ������ �迭�� ���� ���
		cout << x[i] << ' ';
	}

	cout << endl;

	return 0;
}