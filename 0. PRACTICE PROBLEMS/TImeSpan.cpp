#include <iostream>
#include <string>
using namespace std;

class TimeSpan {
private:
    int hours;
    int minutes;

    // Helper method to normalize time (i.e., convert minutes > 59 into hours)
    void normalizeTime() {
        if (minutes >= 60) {
            hours += minutes / 60;  // Convert minutes to hours
            minutes = minutes % 60; // Keep the remaining minutes
        }
    }

public:
    // Constructor to initialize the TimeSpan object with hours and minutes
    TimeSpan(int h, int m) {
        hours = h;
        minutes = m;
        normalizeTime();  // Normalize the time so that minutes are between 0 and 59
    }

    // Returns the number of hours in the time span
    int getHours() {
        return hours;
    }

    // Returns the number of minutes in the time span (between 0 and 59)
    int getMinutes() {
        return minutes;
    }

    // Adds the given hours and minutes to the time span
    void add(int h, int m) {
        hours += h;
        minutes += m;
        normalizeTime();  // Normalize the time
    }

    // Adds another TimeSpan object to the current one
    void add(const TimeSpan& tp) {
        hours += tp.hours;
        minutes += tp.minutes;
        normalizeTime();  // Normalize the time
    }

    // Returns the total time in the time span as the real number of hours (e.g., 9.75 for 9 hours 45 minutes)
    double getTotalHours() {
        return hours + minutes / 60.0;  // Convert minutes to fraction of an hour
    }

    // Returns a string representation of the time span
    string toString() {
        return to_string(hours) + " Hours, " + to_string(minutes) + " Minutes";
    }
};

int main() {
    // Example Usage
    TimeSpan ts1(5, 38);  // 5 hours 38 minutes
    cout << "TimeSpan 1: " << ts1.toString() << endl;

    TimeSpan ts2(3, 25);  // 3 hours 25 minutes
    cout << "TimeSpan 2: " << ts2.toString() << endl;

    ts1.add(2, 30);  // Adding 2 hours 30 minutes to ts1
    cout << "After adding 2 hours 30 minutes to TimeSpan 1: " << ts1.toString() << endl;

    ts1.add(ts2);  // Adding TimeSpan 2 to TimeSpan 1
    cout << "After adding TimeSpan 2 to TimeSpan 1: " << ts1.toString() << endl;

    cout << "Total hours in TimeSpan 1: " << ts1.getTotalHours() << " hours" << endl;

    return 0;
}

