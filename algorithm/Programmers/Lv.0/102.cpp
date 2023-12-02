#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries)
{
    string answer = "";
    for (auto a : queries)
    {
        reverse(my_string.begin() + a[0], my_string.begin() + a[1]+1);
    }
    answer += my_string;
    return answer;
}

int main()
{
    solution("rermgorpsam", { {2,3} ,{0,7},{5,9},{6,10} });
}