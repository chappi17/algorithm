#include <iostream>
#include<vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

// a �� b ���� ������ ���鼭 ���Ѱ����� �ּڰ� �̱�
// �ѹ� ������ ���� ���ϴ°� �����ϱ�

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    vector<int> temp;
    int sum = 0;

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
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