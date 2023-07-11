#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;

    if (my_string.find(is_prefix) != string::npos)
    {
        if (my_string[0] == is_prefix[0])
            return 1;
        else
            return 0;
    }
    else
        return 0;

}

int main()
{
    solution("banana","nan");
}