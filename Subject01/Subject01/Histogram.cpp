#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

void Make_Histogram(char buf[]) { // ������׷��� ����� �׸��� �Լ�
	int histoData[26]; // ���ĺ� 26�� ����
	int cnt = 0; // ���ĺ� ���� ����
	int len; // ���ڿ� ��������
	int index; // �����䵥���Ϳ� �� �ε���
	char alphabet; // ���ĺ� ǥ���� ����

	for (int i = 0; i < 26; i++) { // 0���� ��� �ʱ�ȭ
		histoData[i] = 0;
	}

	len = strlen(buf);

	for (int i = 0; i < len; i++) {
		if ('a' <= buf[i] && buf[i] <= 'z') { // �ҹ��� ���ĺ� ������ ����
			index = buf[i] - 'a';
			histoData[index]++; // �ش� �������ε����� ������Ŵ
			cnt++; // ���ĺ� �� ������Ŵ
		}
		else if ('A' <= buf[i] && buf[i] <= 'Z') { // �빮�� ���ĺ� ������ ����
			index = buf[i] - 'A';
			histoData[index]++;
			cnt++;
		}
	}

	cout << "�� ���ĺ� �� " << cnt << endl << endl; // �� ���ĺ� �� ���

	for (int i = 0; i < 26; i++) { // ������׷��� �׸�
		alphabet = 'a' + i;

		cout << alphabet << "  (" << histoData[i] << ")	:  ";
		
		for (int j = 0; j < histoData[i]; j++) {
			cout << "*"; // ������׷��� * �� ǥ��
		}

		cout << "\n";
	}
}

void Write(char buf[], int size) { // ���ڿ� ���۸� ä��� �Լ�
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(buf, size, ';');
}

int main(void) {
	char buf[10000]; // ���� ������ �迭
	int size; // �迭�� ũ�� ����

	size = sizeof(buf); // �迭�� ũ�� ���

	Write(buf, size);
	Make_Histogram(buf);

	return 0;
}