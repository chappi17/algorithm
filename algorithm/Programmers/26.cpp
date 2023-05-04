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
    vector<bool> primes(n + 1, true); // ��� ���� �Ҽ��� �ʱ�ȭ
    primes[0] = primes[1] = false; // 0�� 1�� �Ҽ��� �ƴ�

    for (int i = 2; i * i <= n; i++) 
    { // 2���� ��Ʈ n���� �ݺ�
        if (primes[i]) { // i�� �Ҽ��� ���
            for (int j = i * i; j <= n; j += i) { // i�� ������� ��� ����
                primes[j] = false;
            }
        }
    }
    return primes[n]; // n�� �Ҽ����� ���� ��ȯ
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


