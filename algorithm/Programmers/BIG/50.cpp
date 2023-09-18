#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;

    for (auto a : strArr)
    {
        if (a.find("ad") == string::npos)
        {
            answer.emplace_back(a);
        }
    }


    return answer;
}