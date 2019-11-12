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

	dic.insert(make_pair("love", "사랑"));
	dic.insert(make_pair("apple", "사과"));
	dic["cherry"] = "체리";

	cout << "저장된 단어 개수" << dic.size() << endl;
	
	string eng;

	while (true) {
		cout << "찾고 싶은 단어>> ";
		getline(cin, eng);
		
		if (eng == "exit") {
			break;
		}

		if (dic.find(eng) == dic.end()) { // 키를 찾았는데 없음
			cout << "없음" << endl;
		}
		else { // 찾았으면 출력
			cout << dic[eng] << endl;
		}
	}
	
	cout << "종료합니다..." << endl;

	return 0;
}