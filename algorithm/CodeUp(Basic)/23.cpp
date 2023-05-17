#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	string data;
	cin >> data;
	string t, m, s;
	stringstream Data(data);

	getline(Data, t, ':');
	getline(Data, m, ':');
	getline(Data, s);

	if (m == "00")
	{
		m = "0";
	}
	cout << m << endl;
}