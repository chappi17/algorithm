#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 

int main()
{
    vector<int> x;
    int y;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> y;
            x.emplace_back(y);
        }

        int a = count(x.begin(), x.end(), 0);
        int b = count(x.begin(), x.end(), 1);

        if (a == 1 && b == 3)
        {
            cout << "A" << "\n";
        }
        else if (a == 2 && b == 2)
        {
            cout << "B" << "\n";
        }
        else if (a == 3 && b == 1)
        {
            cout << "C" << "\n";
        }
        else if (a == 4)
        {
            cout << "D" << "\n";
        }
        else if (b == 4)
        {
            cout << "E" << "\n";
        }

        x.clear(); // Clear the vector for the next set of inputs
    }

	return 0;
}