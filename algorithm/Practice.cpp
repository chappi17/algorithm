#include <iostream>

int main() {
    int h, w, n;
    std::cout << "Enter the length of the grid (h): ";
    std::cin >> h;
    std::cout << "Enter the width of the grid (w): ";
    std::cin >> w;
    std::cout << "Enter the number of bars (n): ";
    std::cin >> n;

    int grid[h][w] = { 0 };  // Create a grid filled with 0 initially using an array

    for (int i = 0; i < n; i++) {
        int l, d, x, y;
        std::cout << "Enter the length of bar " << i + 1 << ": ";
        std::cin >> l;
        std::cout << "Enter the direction of placing the bar (0 for horizontal, 1 for vertical): ";
        std::cin >> d;
        std::cout << "Enter the leftmost or top position of the bar (x, y): ";
        std::cin >> x >> y;

        // Place the bar in the grid based on the given direction and position
        for (int j = 0; j < l; j++) {
            if (d == 0) {  // Horizontal placement
                if (y >= 0 && y < h && x + j >= 0 && x + j < w) {
                    grid[y][x + j] = 1;
                }
            }
            else if (d == 1) {  // Vertical placement
                if (y + j >= 0 && y + j < h && x >= 0 && x < w) {
                    grid[y + j][x] = 1;
                }
            }
        }
    }

    // Print the grid state with 1 for covered cells and 0 for others
    std::cout << "Grid state:\n";
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            std::cout << grid[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}
