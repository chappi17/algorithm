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

	int N, M_count; // N은 숫자의 개수, M_count는 합을 구할 횟수
	cin >> N >> M_count;

	vector<int> numbers(N + 1, 0); // 숫자를 저장할 벡터, 1부터 시작하게 하기 위해 0으로 초기화된 N+1 크기의 벡터 생성
	vector<int> prefixSum(N + 1, 0); // 접두사 합을 저장할 벡터, 마찬가지로 1부터 시작

	for (int i = 1; i <= N; i++)
	{
		cin >> numbers[i]; // i번째 숫자 입력 받기
		prefixSum[i] = prefixSum[i - 1] + numbers[i]; // i번째 접두사 합은 이전 접두사 합에 현재 숫자를 더한 값
	}

	for (int i = 0; i < M_count; i++)
	{
		int I, J; // 구간 시작과 끝을 나타내는 I와 J
		cin >> I >> J;

		// 정답은 J번째 접두사 합에서 I-1번째 접두사 합을 뺀 값
		// I-1번째 접두사 합을 빼면 I번째부터 J번째까지의 합을 구할 수 있음
		int answer = prefixSum[J] - prefixSum[I - 1];
		cout << answer << "\n"; // 정답 출력
	}

	return 0; // 프로그램 종료
}