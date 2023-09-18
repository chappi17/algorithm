#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int count = 0;
    for (int i = 0; i < myString.size(); i++)
    {
        if (myString != "x")
        {
            count++;
        }
        else
        {
            answer.emplace_back(count);
            count = 0;
        }
    }
    return answer;
}