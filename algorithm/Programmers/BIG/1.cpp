#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {

    //vector<vector<int>> votes = { {2,1,0,3},{3,2,0,1},{3,0,2,1},{2,3,0,1} };
    vector<vector<int>> votes = { {2,3,4,0,1},{1,4,3,2,0},{4,1,0,2,3},{3,2,1,4,0},{0,3,2,1,4} };

    int N = votes.size();
    int majority = (N % 2 == 0) ? N / 2 : (N + 1) / 2;
    int rounds = 0;

    while (true) {
        rounds++;
        map<int, int> count;

        for (const auto& vote : votes) {
            for (int candidate : vote) {
                count[candidate] = 0;
            }
        }

        for (const auto& vote : votes) {
            for (int candidate : vote) {
                if (count.find(candidate) != count.end()) {
                    count[candidate]++;
                    break;
                }
            }
        }

        int minVotes = N, maxVotes = -1;
        int minCandidate = -1, maxCandidate = -1;

        for (const auto& entry : count) {
            if (entry.second < minVotes) {
                minVotes = entry.second;
                minCandidate = entry.first;
            }
            if (entry.second > maxVotes) {
                maxVotes = entry.second;
                maxCandidate = entry.first;
            }
            else if (entry.second == maxVotes) { // 동점자가 있을 경우
                maxCandidate = max(maxCandidate, entry.first); // 번호가 큰 후보를 선택
            }
        }

        if (maxVotes >= majority) {
            cout << "투표 횟수: " << rounds << ", 당선자: " << maxCandidate << endl;
            break;
        }
        745
            for (auto& vote : votes) {
                vote.erase(remove(vote.begin(), vote.end(), minCandidate), vote.end());
            }
    }

    return 0;
}
