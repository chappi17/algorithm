#include <iostream>
#include <string>

bool isGroupWord(const std::string& word) {
    for (int i = 1; i < word.length(); i++) {
        if (word[i] != word[i - 1] && word.find(word[i]) != std::string::npos) {
            return false;
        }
    }
    return true;
}

int countGroupWords(int N) {
    int count = 0;
    while (N--) {
        std::string word;
        std::cin >> word;
        if (isGroupWord(word)) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    std::cout << "Enter the number of words: ";
    std::cin >> N;
    std::cout << "Enter the words:\n";
    int groupWordsCount = countGroupWords(N);
    std::cout << "Number of group words: " << groupWordsCount << std::endl;

    return 0;
}