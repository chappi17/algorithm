#include <vector>
#include <algorithm>

using namespace std;

// �θ� ��带 ã�� �Լ�
int findParent(int x, vector<int>& parent) {
    if (parent[x] == x) return x; // �θ� ��尡 �ڱ� �ڽ��̸� ��ȯ
    return parent[x] = findParent(parent[x], parent); // �ƴϸ� �θ� ��� ã�� (���)
}

// �� �θ� ��带 ��ġ�� �Լ�
void unionParent(int a, int b, vector<int>& parent) {
    a = findParent(a, parent); // a�� �θ� ��� ã��
    b = findParent(b, parent); // b�� �θ� ��� ã��
    if (a < b) parent[b] = a; // ���� ���� �θ�� ����
    else parent[a] = b;
}

int solution(int V, vector<vector<int>> cost) {
    int answer = 0; // ����� ������ ���� ����
    vector<int> parent(V + 1); // �θ� ��� ������ ���� �迭

    // �θ� ��� �ʱ�ȭ
    for (int i = 1; i <= V; ++i) {
        parent[i] = i;
    }

    // ����� �������� ����
    sort(cost.begin(), cost.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[2] < b[2];
        });

    // ũ�罺Į �˰��� ����
    for (const auto& c : cost) {
        int a = c[0], b = c[1], weight = c[2];

        // ����Ŭ�� �߻����� �ʴ� ��쿡�� ����
        if (findParent(a, parent) != findParent(b, parent)) {
            answer += weight; // ����� ���ϱ�
            unionParent(a, b, parent); // �θ� ��� ��ġ��
        }
    }


    0    return answer;
}

int main()
{
    solution(5, { {1,2,1},{1,3,1},{1,4,2},{2,5,3},{3,4,2},{4,5,3} });
}