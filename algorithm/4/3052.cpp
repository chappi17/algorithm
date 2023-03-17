#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int N =0;
	int A[11] ;
	int B=0;

	for (int i = 1; i <= 10; i++)
	{
		cin >> N;
		A[i] = (N % 42);
	}
	sort(A, A + 10);
	for (int i = 1; i <= 10; i++)
	{
		if (A[i] != A[i + 1])
		{
			B++;
		}
	}	

	cout << B << "\n";
	return 0;
}