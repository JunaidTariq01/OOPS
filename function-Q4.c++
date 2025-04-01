// Overloading Type Conversion (Class to Basic Type)
// Create a class Time with attributes hours and minutes. Overload type conversion so that a
// Time object can be converted into an integer representing total minutes.
#include <iostream>
using namespace std;

class Time {
    int hours, minutes;
public:
    Time(int h, int m) : hours(h), minutes(m) {}

    operator int() const {
        return hours * 60 + minutes;
    }
};

int main() {
    Time t(2, 30);
    int totalMinutes = t;
    cout << "Total minutes: " << totalMinutes << endl;
    return 0;
}
