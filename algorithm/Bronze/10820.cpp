#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <cctype>
using namespace std;
//문자열 받기 

int main()
{
    string str;

    while (getline(cin, str)) {
        int lowercaseCount = 0;
        int uppercaseCount = 0;
        int numberCount = 0;
        int spaceCount = 0;

        for (char ch : str) {
            if (std::islower(ch)) {
                lowercaseCount++;
            }
            else if (std::isupper(ch)) {
                uppercaseCount++;
            }
            else if (std::isdigit(ch)) {
                numberCount++;
            }
            else if (std::isspace(ch)) {
                spaceCount++;
            }
        }

        cout << lowercaseCount << " " << uppercaseCount << " " << numberCount << " " << spaceCount << "\n";
    }

	return 0;
}