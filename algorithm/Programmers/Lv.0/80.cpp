#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    vector<int> answer;
    string temp = "";
    int sum = 0;
    for (char a : my_string)
    {
        if (isdigit(a))
        {
            temp += a;            
        }
        else
        {
            if (!temp.empty())
            {
                answer.emplace_back(stoi(temp));
                temp.clear();
            }
        }
    }

    if (!temp.empty())
    {
        answer.emplace_back(stoi(temp));
    }

    for (int i = 0; i < answer.size(); i++)
    {
        sum += answer[i];
    }
    
    return sum;
}

int main()
{
    solution("aAb1B2cC34oOp");
}