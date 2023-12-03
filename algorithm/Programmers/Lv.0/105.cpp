#include <string>
#include <vector>


using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string temp;

    for (string a : picture)
    {
        for (char b : a)
        {
            for (int  i = 0; i < k; i++)
            {
                temp += b;
            }
        }
        for (int i = 0; i < k; i++)
        {
            answer.push_back(temp);
        }
            temp = "";
    } 
    return answer;
}


int main()
{
    solution({ ".xx...xx.", "x..x.x..x", "x...x...x", ".x.....x.", "..x...x..", "...x.x...", "....x...." }, 2);
}