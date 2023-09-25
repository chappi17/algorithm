#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string temp = ""; 
        for (int i = 0; i < myString.size(); i++)
        {
            temp += myString.substr(i,pat.size());
            if (temp == pat)
            {
                answer++;
                temp.clear();
            }
            else
            {
                temp.clear();
            }
        }
    return answer;
}

int main()
{
    solution("banana", "ana");
}