#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, int> ages;

	ages["Mike"] = 40;
	ages["Roi"] = 20;
	ages["Vicky"] = 30;

	if (ages.find("Vicky") != ages.end())
	{
		cout << "Found Vicky" << "\n";
	}
	else
	{
		cout << "Key not found" << "\n";
	}


	for (auto& pair : ages)
	{
		cout << pair.first << " " << pair.second << "\n";
	}

}