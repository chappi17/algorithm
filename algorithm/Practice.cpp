#include <iostream>

const int boardSize = 19;

int main() {
    // Create a 19x19 board, initialized to 0 (no stones)
    int board[boardSize][boardSize] = { 0 };

    int n;
    std::cout << "Enter the number of white stones: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        std::cout << "Enter coordinates for stone " << i + 1 << ": ";
        std::cin >> x >> y;

        // Adjust for 0-indexed array
        x--;
        y--;

        // Place a white stone (1) at the specified position
        board[x][y] = 1;
    }

    // Output the state of the board
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}