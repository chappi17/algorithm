#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool check(const vector<char>& grid, const string& word) {
    for (int i = 0; i < 3; ++i) {
        string row = string(1, grid[i * 3]) + string(1, grid[i * 3 + 1]) + string(1, grid[i * 3 + 2]);
        string col = string(1, grid[i]) + string(1, grid[i + 3]) + string(1, grid[i + 6]);
        if (row == word || col == word) return true;
    }

    string diag1 = string(1, grid[0]) + string(1, grid[4]) + string(1, grid[8]);
    string diag2 = string(1, grid[2]) + string(1, grid[4]) + string(1, grid[6]);
    return diag1 == word || diag2 == word;
}

int solution(string word1, string word2) {
    int answer = 0;
    string letters = word1 + word2;
    sort(letters.begin(), letters.end());
    vector<char> grid(9);

    do {
        for (int i = 0; i < 9; ++i) {
            grid[i] = letters[i];
        }

        int count1 = 0, count2 = 0;

        if (check(grid, word1)) ++count1;
        if (check(grid, word2)) ++count2;

        if (count1 == 1 && count2 == 1) {
            ++answer;
        }
    } while (next_permutation(letters.begin(), letters.end()));

    return answer;
}

int main() {
    cout << solution("ABC", "CBC") << endl;  // Output should be 1092
    return 0;
}

