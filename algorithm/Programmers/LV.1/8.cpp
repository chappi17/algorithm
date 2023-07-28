#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int pCount = 0;
    int yCount = 0;

    for (int i=0; i <s.size();i++)
    {
        if (s[i] == 'p')
        {
            pCount++;
        }
        else if (s[i] == 'y')
        {
            yCount++;
        }
        else
            continue;
    }

    if (pCount == yCount)
    {
        answer = true;
    }
    else
        answer = false;
    return answer;
}