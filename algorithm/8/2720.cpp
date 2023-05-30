#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number of test cases: ";
    std::cin >> n;

    std::vector<int> coins = { 25, 10, 5, 1 };

    for (int i = 0; i < n; i++) {
        int amount;
        std::cout << "Enter the amount of change (in cents): ";
        std::cin >> amount;

        std::vector<int> counts;

        for (int j = 0; j < coins.size(); j++) {
            int count = amount / coins[j];
            counts.push_back(count);
            amount %= coins[j];
        }

        // Print the counts for each coin denomination
        for (int k = 0; k < counts.size(); k++) {
            std::cout << counts[k];
            if (k < counts.size() - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}