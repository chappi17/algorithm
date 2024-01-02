#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<string> collectedItem;

	collectedItem.insert("Ancient Sword");
	collectedItem.insert("Medical Herb");
	collectedItem.insert("Ancient Sword"); // 중복된거는 제외 + 오름차순으로 정렬 (알파벳)
	collectedItem.insert("Armor");

	cout << "Unique Items Collected" << "\n";

	for (const string& item : collectedItem)
	{
		cout << "- " << item << "\n";
	}

}


/*
	set<int> numbers;

	numbers.insert(50);
	numbers.insert(10);
	numbers.insert(500);
	numbers.insert(20);
	numbers.insert(20);

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << "\n";
	}

	set<int>::iterator itFind = numbers.find(500);

	if (itFind != numbers.end())
	{
		cout << "Found : " << *itFind << endl;
	}

	return 0;
*/