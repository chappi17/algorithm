#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>

using namespace std;

const int width = 40;
const int height = 40;

void drawCube(char frame[height][width], double angle) {
    double cube[8][3] = {
        {-1, -1, -1},
        {1, -1, -1},
        {1, 1, -1},
        {-1, 1, -1},
        {-1, -1, 1},
        {1, -1, 1},
        {1, 1, 1},
        {-1, 1, 1}
    };

    // Rotate cube around the y-axis
    for (int i = 0; i < 8; ++i) {
        double x = cube[i][0];
        double z = cube[i][2];
        cube[i][0] = x * cos(angle) - z * sin(angle);
        cube[i][2] = x * sin(angle) + z * cos(angle);
    }

    // Project cube onto 2D frame
    for (int i = 0; i < 8; ++i) {
        int x = (int)((cube[i][0] + 2) * 10);
        int y = (int)((cube[i][1] + 2) * 10);
        if (x >= 0 && x < width && y >= 0 && y < height) {
            frame[y][x] = '*';
        }
    }
}

int main() {
    char frame[height][width];
    double angle = 0;

    while (true) {
        // Clear frame
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                frame[i][j] = ' ';
            }
        }

        // Draw cube
        drawCube(frame, angle);

        // Render frame
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                cout << frame[i][j];
            }
            cout << endl;
        }

        // Update angle
        angle += 0.05;

        // Wait before drawing the next frame
        this_thread::sleep_for(chrono::milliseconds(100));

        // Clear console (Unix-specific)
        cout << "\033[2J\033[1;1H";
    }

    return 0;
}
