#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

bool is_prime(int n) 
{
    if (n < 2) return false;
    vector<bool> primes(n + 1, true); // 모든 수를 소수로 초기화
    primes[0] = primes[1] = false; // 0과 1은 소수가 아님

    for (int i = 2; i * i <= n; i++) 
    { // 2부터 루트 n까지 반복
        if (primes[i]) { // i가 소수인 경우
            for (int j = i * i; j <= n; j += i) { // i의 배수들을 모두 지움
                primes[j] = false;
            }
        }
    }
    return primes[n]; // n이 소수인지 여부 반환
}

int main()
{
	vector<int> nums = { 1,2,3,4 };
	int answer = -1;

    int n;
    cin >> n;
    if (is_prime(n)) 
    {
        cout << n << " is a prime number." << endl;
    }
    else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;

}


