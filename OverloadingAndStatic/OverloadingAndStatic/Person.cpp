#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

Person::Person() { id = 1, name = "Grace", weight = 20.5; } // default������ ����
Person::Person(int id, string name) { this->id = id, this->name = name, weight = 20.5; } // �Ű������� 2���� ������ ����
Person::Person(int id, string name, double weight) { this->id = id, this->name = name, this->weight = weight; } // �Ű������� 3���� ������ ����
void Person::show() { cout << id << ' ' << weight << ' ' << name << endl; } // Person�� ���� ����ϴ� �Լ� ����