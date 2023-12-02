#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    int ameri_price = 4500;
    int latte_price = 5000;

    for (const string& a : order)
    {
        if (a.find("americano") != string::npos || a.find("anything") != string::npos)
        {
            answer += ameri_price;
        }
        else if (a.find("latte") != string::npos)
        {
            answer += latte_price;
        }
    }

    return answer;
}

int main()
{
    solution({ "cafelatte", "americanoice", "hotcafelatte", "anything" });
}


// a.find("americano")같은 경우 벡터 문자열 내에 같은 문자가 있는지 확인할 수 있는 기능이며, 유용함
// 만약 찾을 수 없다면 string::npos 나온다는 말인데, 성공했는지의 여부를 확인하는데 쓰이는 기능이다. 즉 성공했다면 true라는 거고, 실패했으면 false 라는 뜻 