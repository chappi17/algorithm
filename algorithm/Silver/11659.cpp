//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int M_count;
//	int M;
//	int answer = 0;
//
//	cin >> N >> M_count;
//
//	vector<int> M_element(1);
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> M;
//		M_element.emplace_back(M);
//	}
//
//	for (int i = 0; i < M_count; i++)
//	{
//		int I = 0;
//		int J = 0;
//
//		cin >> I >> J;
//
//		for (int j = I; j <= J; j++)
//		{
//			answer += M_element[j];
//		}
//
//		cout << answer << "\n";
//		answer = 0;
//	}
//
//	return 0;
//}

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M_count; // N�� ������ ����, M_count�� ���� ���� Ƚ��
	cin >> N >> M_count;

	vector<int> numbers(N + 1, 0); // ���ڸ� ������ ����, 1���� �����ϰ� �ϱ� ���� 0���� �ʱ�ȭ�� N+1 ũ���� ���� ����
	vector<int> prefixSum(N + 1, 0); // ���λ� ���� ������ ����, ���������� 1���� ����

	for (int i = 1; i <= N; i++)
	{
		cin >> numbers[i]; // i��° ���� �Է� �ޱ�
		prefixSum[i] = prefixSum[i - 1] + numbers[i]; // i��° ���λ� ���� ���� ���λ� �տ� ���� ���ڸ� ���� ��
	}

	for (int i = 0; i < M_count; i++)
	{
		int I, J; // ���� ���۰� ���� ��Ÿ���� I�� J
		cin >> I >> J;

		// ������ J��° ���λ� �տ��� I-1��° ���λ� ���� �� ��
		// I-1��° ���λ� ���� ���� I��°���� J��°������ ���� ���� �� ����
		int answer = prefixSum[J] - prefixSum[I - 1];
		cout << answer << "\n"; // ���� ���
	}

	return 0; // ���α׷� ����
}