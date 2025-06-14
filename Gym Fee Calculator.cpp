#include <iostream>
using namespace std;

int main() {
    int hours;

    cout << "Enter the number of hours you spent at the gym: ";
    cin >> hours;

    if (hours <= 0) {
        cout << "Invalid input. Please enter a positive number of hours." << endl;
    } else {
        int fee = 0;

        if (hours == 1) {
            fee = 0;
        } else {
            fee = (hours - 1) * 200;
        }

        cout << "Total gym usage fee: Rs " << fee << endl;
    }

    return 0;
}
