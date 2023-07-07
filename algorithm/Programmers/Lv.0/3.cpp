#include <string>
#include <vector>
#include <sstream>

using namespace std;

std::vector<std::string> splitStringIntoWords(const std::string& my_string) {
    std::vector<std::string> words;
    std::istringstream iss(my_string);
    std::string word;

    while (iss >> word) {
        words.push_back(word);
    }

    return words;
}

int main()
{
    splitStringIntoWords("i love you");
}
