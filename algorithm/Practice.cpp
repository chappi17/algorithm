#include <iostream>
#include <string>

int main() {
    int x, y;
    std::cin >> x >> y;

    // Step 2: Define reference day (Monday = 0)
    int referenceDay = 0;

    // Step 3: Determine the number of days from the reference day
    int daysFromReference = 0;

    // Add the days from previous months
    for (int month = 1; month < x; month++) {
        if (month == 2) {
            // Handle February separately for leap years
            daysFromReference += 28;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysFromReference += 30;
        }
        else {
            daysFromReference += 31;
        }
    }

    // Add the remaining days from the given month
    daysFromReference += y - 1;

    // Step 4: Calculate the day of the week
    int dayOfWeek = (referenceDay + daysFromReference) % 7;

    // Step 5: Output the result
    std::string weekdayNames[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
    std::cout << weekdayNames[dayOfWeek] << std::endl;

    return 0;
}