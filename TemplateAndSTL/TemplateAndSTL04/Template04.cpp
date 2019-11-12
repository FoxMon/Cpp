#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::map;
using std::string;
using std::make_pair;
using std::cin;
using std::endl;

int main(void) {
	map<string, string> dic;

	dic.insert(make_pair("love", "���"));
	dic.insert(make_pair("apple", "���"));
	dic["cherry"] = "ü��";

	cout << "����� �ܾ� ����" << dic.size() << endl;
	
	string eng;

	while (true) {
		cout << "ã�� ���� �ܾ�>> ";
		getline(cin, eng);
		
		if (eng == "exit") {
			break;
		}

		if (dic.find(eng) == dic.end()) { // Ű�� ã�Ҵµ� ����
			cout << "����" << endl;
		}
		else { // ã������ ���
			cout << dic[eng] << endl;
		}
	}
	
	cout << "�����մϴ�..." << endl;

	return 0;
}