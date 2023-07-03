#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    string line;

    while (getline(cin, line))
    {
        if (line == "EOI")
            break;

        transform(line.begin(), line.end(), line.begin(), ::tolower);

        if (line.find("nemo") != string::npos)
        {
            cout << "Found" << endl;
        }
        else
        {
            cout << "Missing" << endl;
        }
    }
	return 0;
}