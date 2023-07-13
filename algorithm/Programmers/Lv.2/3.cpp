#include <iostream>
#include<vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

// a 와 b 전부 교차로 돌면서 곱한값에서 최솟값 뽑기
// 한번 뽑으면 선택 못하는거 생각하기

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    vector<int> temp;
    int sum = 0;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;


    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i] * B[i];
    }

    return answer;
}

int main()
{
    solution({ 1,2 }, { 3,4 });
}