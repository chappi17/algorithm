#include <iostream>
#include <map>

using namespace std;

class Person
{
private:
	
	string name;
	int age;
public:

	Person() :name(""), age(0)
	{

	}

	Person(string name, int age) :
		name(name),
		age(age)
	{
	}
		void print() const
		{
			cout << name << ": " << age << "\n";
		}
};

int main()
{
	map<int, Person> people;

	people[23] = Person("Mike", 40);
	people[60] = Person("Vicky", 20);
	people[1] = Person("Roi", 30);

	for (auto& a : people)
	{
		cout << a.first << " ";
		a.second.print();
	}

	//for (map<int,Person>::iterator it = people.begin(); it !=people.end();it++)
	//{
	//	it->second.print();
	//}

	return 0;
}