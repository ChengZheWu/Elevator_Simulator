#include "Elevator.h"

#include <chrono>
#include <iostream>
#include <random>
#include <thread>

using namespace std;

Elevator::Elevator() {
    cout << "Welcome, this Elevator only has 1F ~ 10F" << endl;
}
int Elevator::get_floor() {
    return current_floor;
}
void Elevator::display_floor() {
    cout << "The current floor is: " << current_floor << "F" << endl;
}
void Elevator::move(int user_floor, int target_floor) {
    if (user_floor < min_floor || user_floor > max_floor || target_floor < min_floor ||
        target_floor > max_floor) {
        cout << "Invalid Floor, please enter 1F to 10F" << endl;
        return;
    }
    if (current_floor == target_floor) {
        cout << "Current floor and target floor cannot be the same, please try again" << endl;
        return;
    }
    int diff = user_floor - current_floor;
    if (diff > 0) {
        while (current_floor != user_floor) {
            display_floor();
            current_floor++;
            this_thread::sleep_for(chrono::seconds(1));
        }
    } else if (diff < 0) {
        while (current_floor != user_floor) {
            display_floor();
            current_floor--;
            this_thread::sleep_for(chrono::seconds(1));
        }
    }
    display_floor();
    cout << "Arrived at floor " << current_floor << "F. Door will close in 3 seconds." << endl;
    this_thread::sleep_for(chrono::seconds(3));
    diff = target_floor - current_floor;
    if (diff > 0) {
        while (current_floor != target_floor) {
            display_floor();
            current_floor++;
            this_thread::sleep_for(chrono::seconds(1));
        }
    } else if (diff < 0) {
        while (current_floor != target_floor) {
            display_floor();
            current_floor--;
            this_thread::sleep_for(chrono::seconds(1));
        }
    }
    display_floor();
    cout << "Arrived at floor " << current_floor << "F. Door will close in 3 seconds." << endl;
    this_thread::sleep_for(chrono::seconds(3));
}