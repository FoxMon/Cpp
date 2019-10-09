#ifndef __RANDOM__H_
#define __RANDOM__H_
#include <cstdlib>
#include <ctime>

class Random {
private:
	static int maxNum; // ���������� �ִ밪

public:
	static void seed() { srand((unsigned)time(NULL)); }; // �׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static int nextInt(int min = 0, int max = 32767); // min�� max������ ���� ���� ����
	static char nextAlphabet(); // ���� ���ĺ� ���� ����
	static double nextDouble(); // 0���� ũ�ų� ���� 1���� ���� ���� �Ǽ� ����
};
#endif