#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() 
{
    int a,b;
    cin >> a >> b;
    
    string words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = a; i <= b; i++)
    {
        if ( 1 <= i && i <= 9)
        {
            cout << words[i] << "\n";
        }
        else
        {
            if (i % 2 == 0)
            {
                cout << "even" << "\n";
            }
            else
            {
                cout << "odd" << "\n";
            }
        }
    }
    
    return 0;
}