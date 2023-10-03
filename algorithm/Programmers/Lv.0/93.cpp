#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    
    unordered_map<int,int> lengthCount;

    for (auto a : strArr)
    {
        int len = a.length();
        lengthCount[len]++;
    }

    int maxlength = 0;
    for (auto b : lengthCount)
    {
        maxlength = max(maxlength, b.second);
    }

    answer = maxlength;

    return answer;
}

int main()
{
    solution({ "a","bc","d","efg","hi" });
}