#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


int solution(vector<int> rank, vector<bool> attendance) 
{
    int answer = 0;
    map<int, int> m;

    for (int i = 0; i < rank.size(); i++)
    {
        if (attendance[i])
        {
        // 개천재네 + map의 원소 번호에 순위를 적는 것을 생각 못함
            m[rank[i]] = i;
        }
    }
    vector <pair<int, int>> vec(m.begin(), m.end());

    answer = 10000 * vec[0].second + 100 * vec[1].second + vec[2].second;
    return answer;
}

int main()
{
    solution({ 3,7,2,5,4,6,1 }, { false,true,true ,true ,true ,false,false });


}

// 3,7,2,5,4,6,1   false,true,true ,true ,true ,false,false
// 1,2,3    true,true,true



/*
  int a;
    int b;
    int c;
    vector<int> d;
    vector<pair<int, bool>> result;

    for (int i = 0; i < rank.size(); i++)
    {
        if (attendance[i] == true)
        {
            result.push_back(make_pair(rank[i], attendance[i]));
        }
    }
    sort(result.begin(), result.end());

    for (int i = 0; i < result.size(); i++)
    {
        for (int j=0; j < rank.size();j++)
        {
            if (rank[j] == result[i].first)
            {
                d.emplace_back(j);
            }
        }
    }

    a = d[0];
    b = d[1];
    c = d[2];

    answer = Cal(a, b, c);

    return answer;
*/