#include <iostream>

using namespace std;

int main() {
    int h, m, m1;

    // Read the departure time and flight duration
    cout << "Enter the departure hour and minute: ";
    cin >> h >> m;
    cout << "Enter the duration of the flight in minutes: ";
    cin >> m1;

    // Calculate the total flight time in minutes
    int total_minutes = h * 60 + m + m1;

    // Calculate the landing hour and minute
    int landing_hours = (total_minutes / 60) % 24; // Hours wrap around after 23
    int landing_minutes = total_minutes % 60;

    // Display the landing time
    cout << "The landing time is: ";
    if (landing_hours < 10) {
        cout << "0"; // Add leading zero for single-digit hours
    }
    cout << landing_hours << ":";
    if (landing_minutes < 10) {
        cout << "0"; // Add leading zero for single-digit minutes
    }
    cout << landing_minutes << endl;

    return 0;
}
