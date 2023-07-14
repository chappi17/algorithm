#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    int temp = 0;
    for (int i = 0; i < is_prefix.size(); i++)
    {
        if (my_string[i] == is_prefix[i])
        {
            temp += 1;
            if (temp == is_prefix.size())
            {
                answer = 1;
                break;
            }
        }
        else
            answer = 0;
    }

    return answer;
}

int main()
{
    solution({ "banana"}, {"bananan"});
}