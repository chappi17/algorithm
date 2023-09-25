#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> temp = emergency;
    vector<int> answer;
    vector<pair<int, int>> level;

    sort(emergency.rbegin(), emergency.rend());


    for (int i = 0; i < emergency.size(); i++)
    {
        level.emplace_back(emergency[i], i + 1);
    }

    for (int i = 0; i < level.size(); i++)
    {
        for (int j = 0; j < temp.size(); j++)
        {
            if (temp[i] == level[j].first)
            {
                answer.emplace_back(level[j].second);
            }
        }
    }

    return answer;
}

int main()
{
    solution({ 30,10,23,6,100});

    return 0;
}