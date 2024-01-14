#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


struct Journal
{
	string title;
	vector<string> entries;

	Journal(const string& title) :title(title) {}

	void Add_entry(const string& entry)
	{
		static int count = 1;
		entries.push_back(entry);
	}

	void save(const string& filename)
	{
		ofstream ofs(filename);
		for (auto& e : entries)
		{
			ofs << e << endl;
		}
	}
};

struct PersistenceManager
{
	static void save(const Journal& j, const string& filename)
	{
		ofstream ofs(filename);
		for (auto& e : j.entries)
		{
			ofs << e << endl;
		}
	}
};

// SOLID 1. Single Responsiblility Principle  단일 책임 원칙 (클래스는 단 하나의 책임을 가져야함)
// 클래스를 설정하는 것은 해당 클래스에서만 책임지고, 
// 그 클래스를 저장하거나 다른걸 하는 역할은 다른 클래스에서 직접 하는것
// 여기서는 save 기능을 다른 클래스에서 직접 설정하는것. 
// 클래스의 재사용성과 유지보수성이 향상됨

int main()
{

	Journal journal_1{ "Dear diary" };
	journal_1.Add_entry("I ate a bug");
	journal_1.Add_entry("That was discursting");

	//journal_1.save("diary.txy");

	PersistenceManager pm;
	pm.save(journal_1, "diary.txt");

	return 0;
}