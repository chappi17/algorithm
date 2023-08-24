#include <iostream>

using namespace std;

struct Person
{
	string name;
	int age;
	double weight;
	double height;
};

void show(Person& a)
{
	cout <<"이름 " <<a.name << " 나이 " << a.age <<  " 몸무게 " << a.weight << " 키 " << a.height << "\n";

};

int main()
{
	Person person1;
	cout << "이름을 입력하십시오" << "\n";
	cin >> person1.name;
	
	cout << "나이를 입력하십시오" << "\n";
	cin >> person1.age;

	cout << "몸무게를 입력하십시오" << "\n";
	cin >> person1.weight;

	cout << "키를 입력하십시오" << "\n";
	cin >> person1.height;

	Person person2;
	cout << "이름을 입력하십시오" << "\n";
	cin >> person2.name;

	cout << "나이를 입력하십시오" << "\n";
	cin >> person2.age;

	cout << "몸무게를 입력하십시오" << "\n";
	cin >> person2.weight;

	cout << "키를 입력하십시오" << "\n";
	cin >> person2.height;

	show(person1);
	show(person2);

}