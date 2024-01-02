#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap<int, string> questMaps;

	questMaps.insert(make_pair(1, "Find the Lost Sword"));
	questMaps.insert(make_pair(1, "Defeat the Goblin King"));
	questMaps.insert(make_pair(3, "Gather 10 Medical Herbs"));
	questMaps.insert(make_pair(3, "Explore the Cursed Cave"));
	questMaps.insert(make_pair(2, "Go to new Land"));
	questMaps.insert(make_pair(2, "Run from the Dragon"));


	int chosenDifficulty = 3;

	cout << "Available Quests at Difficulty Level" << chosenDifficulty << "\n";

	auto range = questMaps.equal_range(chosenDifficulty);

	for (auto it = range.first; it != range.second;  it++)
	{
		cout << "- " << it->second << "\n";
	}


	return 0;
}



/*

	multimap <int, string> lookup;


	lookup.insert(make_pair(30, "Mike"));
	lookup.insert(make_pair(10, "Vicky"));
	lookup.insert(make_pair(40, "Bob"));
	lookup.insert(make_pair(50, "Roi"));

	// 키의 시작부터 끝까지 순회하기
	for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}

	// 키가 40인 것부터 순회하기
	for (multimap<int, string>::iterator it = lookup.find(40); it != lookup.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}

	return 0;
*/