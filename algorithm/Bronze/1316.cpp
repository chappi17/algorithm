#include <iostream>
#include <string>
using namespace std;

bool B(string& word)
{
	for (int i = 0; i < word.size() - 1; i++) {
		if (word[i] != word[i + 1] && word.find(word[i], i + 1) != string::npos) {
			return false;
		}
	}
	return true;
}

int main()
{
	int a;
	cin >> a;
	bool c = false;
	int count=0;

	for (int i = 0; i < a; i++)
	{
		string b;
		cin >> b;
		if (B(b))
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}