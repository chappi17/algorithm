#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
// 테이스 케이스 입력받기
// 소수의 갯수 출력 


bool Sosu(int num) {
    if (num < 2) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
	int t, x,z;
	x = 0;
	z = 0;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> x;
        if (Sosu(x) == true)
        {
            z ++;
        }
	}
	cout << z << "\n";
	return 0;
}