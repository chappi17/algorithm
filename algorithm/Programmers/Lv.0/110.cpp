#include <string>
#include <vector>
#include <string>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string a;

    while (my_str.size() > n)
    {
        for (int i = 0; i < n; i++)
        {
            a.push_back(my_str[i]);
        }
        answer.emplace_back(a);
        a.clear();
        my_str.erase(my_str.begin(), my_str.begin() + n);
    }
    answer.emplace_back(my_str);
   

    return answer;
}

int main()
{
    solution("abc1Addfggg4556b", 6);
}