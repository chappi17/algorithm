#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	string data;
	cin >> data;
	stringstream Data(data);
	string y, m, d;
	getline(Data, y, '.');
	getline(Data, m, '.');
	getline(Data, d, '.');

	cout << d << "-" << m << "-" << y << endl;
}