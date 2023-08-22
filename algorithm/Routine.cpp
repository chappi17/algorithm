#include <iostream>
#include <string>
#include <vector>

class DailyRoutine {
private:
    std::vector<std::string> routines;

public:
    void AddRoutine(const std::string& routine) {
        routines.push_back(routine);
    }

    void ShowRoutines() {
        std::cout << "Daily Routines:\n";
        for (const auto& routine : routines) {
            std::cout << " - " << routine << '\n';
        }
    }
};

int main() {
    DailyRoutine dailyRoutine;
    int choice;

    do {
        std::cout << "\nDaily Routine Menu:\n";
        std::cout << "1. Add Routine\n";
        std::cout << "2. Show Routines\n";
        std::cout << "3. Exit\n";
        std::cout << "Choose option: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear newline left in buffer

        switch (choice) {
            case 1: {
                    std::string routine;
                    std::cout << "Enter routine description: ";
                    std::getline(std::cin, routine);
                    dailyRoutine.AddRoutine(routine);
                    break;
                }
            case 2:
                dailyRoutine.ShowRoutines();
                break;
            case 3:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
                break;
        }

    } while (choice != 3);

    return 0;
}
