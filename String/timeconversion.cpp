#include <iostream>
using namespace std;

string timeConversion(string s) {
    string period = s.substr(8, 2); // AM or PM
    int hour = stoi(s.substr(0, 2)); // extract hour

    if (period == "AM") {
        if (hour == 12) {
            hour = 0;
        }
    } else { // PM
        if (hour != 12) {
            hour += 12;
        }
    }

    // format hour back to 2 digits
    string hh = (hour < 10 ? "0" : "") + to_string(hour);

    return hh + s.substr(2, 6); // add mm:ss
}

int main() {
    string s;
    cin >> s;
    cout << timeConversion(s);
}