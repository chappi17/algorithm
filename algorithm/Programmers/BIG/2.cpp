#include <vector>
#include <algorithm>

using namespace std;

// 부모 노드를 찾는 함수
int findParent(int x, vector<int>& parent) {
    if (parent[x] == x) return x; // 부모 노드가 자기 자신이면 반환
    return parent[x] = findParent(parent[x], parent); // 아니면 부모 노드 찾기 (재귀)
}

// 두 부모 노드를 합치는 함수
void unionParent(int a, int b, vector<int>& parent) {
    a = findParent(a, parent); // a의 부모 노드 찾기
    b = findParent(b, parent); // b의 부모 노드 찾기
    if (a < b) parent[b] = a; // 작은 쪽을 부모로 설정
    else parent[a] = b;
}

int solution(int V, vector<vector<int>> cost) {
    int answer = 0; // 결과값 저장을 위한 변수
    vector<int> parent(V + 1); // 부모 노드 저장을 위한 배열

    // 부모 노드 초기화
    for (int i = 1; i <= V; ++i) {
        parent[i] = i;
    }

    // 비용을 기준으로 정렬
    sort(cost.begin(), cost.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[2] < b[2];
        });

    // 크루스칼 알고리즘 실행
    for (const auto& c : cost) {
        int a = c[0], b = c[1], weight = c[2];

        // 사이클이 발생하지 않는 경우에만 선택
        if (findParent(a, parent) != findParent(b, parent)) {
            answer += weight; // 결과에 더하기
            unionParent(a, b, parent); // 부모 노드 합치기
        }
    }


    0    return answer;
}

int main()
{
    solution(5, { {1,2,1},{1,3,1},{1,4,2},{2,5,3},{3,4,2},{4,5,3} });
}