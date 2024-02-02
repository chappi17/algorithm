#include <iostream>
#include <string>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(n_temp);

string words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if( 1 <= n && 9 >= n)
    {
        cout << words[n] << "\n"; 
    }
    else 
    {
        cout << "Greater than 9" <<"\n";
    }

    return 0;
}

