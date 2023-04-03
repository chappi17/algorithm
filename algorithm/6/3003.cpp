#include <iostream>
#include <string>
using namespace std;

int main()
{
	int K = 1;
	int Q = 1;
	int L = 2;
	int B = 2;
	int N = 2;
	int P = 8;

	int input_K;
	int input_Q;
	int input_L;
	int input_B;
	int input_N;
	int input_P;

	cin >> input_K >> input_Q >> input_L >> input_B >> input_N >> input_P;


	cout << K-input_K <<" " << Q- input_Q << " " << L-input_L << " " << B-input_B << " " << N-input_N << " " << P-input_P;
}