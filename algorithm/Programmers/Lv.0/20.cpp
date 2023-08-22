#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    //cin >> str;
    getline(cin, str);

    for (char &ch : str)
    {
        if (isupper(ch))
        {
            ch = tolower(ch);
        }
        else if (islower(ch))
        {
            ch = toupper(ch);
        }
    }

    cout << str << "\n";
    return 0;
}