#include <iostream>

#include "Elevator.h"

using namespace std;

int main() {
    cout << "Start the Elevator1 ..." << endl;
    Elevator elevator1;
    cout << "Start the Elevator2 ..." << endl;
    Elevator elevator2;

    int user_floor, target_floor;
    bool use_elevator1 = true;

    while (true) {
        cout << "Enter your current floor: ";
        cin >> user_floor;
        cout << "Enter your target floor: ";
        cin >> target_floor;

        int diff1 = abs(elevator1.get_floor() - user_floor);
        int diff2 = abs(elevator2.get_floor() - user_floor);

        if (diff1 < diff2) {
            cout << "Elevator 1 is coming ..." << endl;
            elevator1.move(user_floor, target_floor);
        } else if (diff1 > diff2) {
            cout << "Elevator 2 is coming ..." << endl;
            elevator2.move(user_floor, target_floor);
        } else {
            if (use_elevator1) {
                elevator1.move(user_floor, target_floor);
            } else {
                elevator2.move(user_floor, target_floor);
            }
            use_elevator1 = !use_elevator1;
        }
    }

    return 0;
}
