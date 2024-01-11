#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string filename = "stats.txt";
	ifstream input;

	input.open(filename);

	if (!input.is_open())
	{
		return 1;
	}

	while (input)
	{
		string line;
		getline(input, line, ':');
		
		int num;
		input >> num;
	//	input.get();
		if (!input)
		{
			break;
		}

		cout << line << " -- " << num << "\n";
	}

	input.close();

	return 0;
}