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
	cout <<"�̸� " <<a.name << " ���� " << a.age <<  " ������ " << a.weight << " Ű " << a.height << "\n";

};

int main()
{
	Person person1;
	cout << "�̸��� �Է��Ͻʽÿ�" << "\n";
	cin >> person1.name;
	
	cout << "���̸� �Է��Ͻʽÿ�" << "\n";
	cin >> person1.age;

	cout << "�����Ը� �Է��Ͻʽÿ�" << "\n";
	cin >> person1.weight;

	cout << "Ű�� �Է��Ͻʽÿ�" << "\n";
	cin >> person1.height;

	Person person2;
	cout << "�̸��� �Է��Ͻʽÿ�" << "\n";
	cin >> person2.name;

	cout << "���̸� �Է��Ͻʽÿ�" << "\n";
	cin >> person2.age;

	cout << "�����Ը� �Է��Ͻʽÿ�" << "\n";
	cin >> person2.weight;

	cout << "Ű�� �Է��Ͻʽÿ�" << "\n";
	cin >> person2.height;

	show(person1);
	show(person2);

}