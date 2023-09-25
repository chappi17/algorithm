#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";
    int temp = s.size();

    if (temp % 2 == 0)
    {
        for (int i = 0; i < temp; i++)
        {
            answer += s.substr(temp / 2 - 1, 2);
            break;
        }
    }
    else
    {
        for (int i = 0; i <temp;i++)
        {
            answer += s.substr(temp / 2, 1);
            break;
        }
    }

    return answer;
}


//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string s) 
//{
//    string answer = "";
//    long long len = s.length();
//    if (len % 2 == 0) {
//        answer = s.substr(len / 2 - 1, 2);
//    }
//    else {
//        answer = s.substr(len / 2, 1);
//    }
//    return answer;
//}
int main()
{
    solution("abcde");
}