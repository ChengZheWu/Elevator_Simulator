#include <cassert>
#include <iostream>

#include "Elevator.h"

using namespace std;

void test_invalid_floor() {
    cout << "-----TEST 1: Invalid Floor-----" << endl;
    Elevator e;
    cout << "TEST 1-1: Invalid Floor" << endl;
    e.move(0, 5);
    assert(e.get_floor() == 1);
    e.move(11, 5);
    assert(e.get_floor() == 1);
    e.move(2, 11);
    assert(e.get_floor() == 1);
    e.move(2, 0);
    assert(e.get_floor() == 1);
    cout << "TEST 1-2: Same Floor" << endl;
    e.move(3, 3);
    assert(e.get_floor() == 3);
    cout << "----------TEST1 PASS----------" << endl;
}

void test_move() {
    cout << "-----TEST 2: Move-----" << endl;
    cout << "TEST 2-1: Move Up" << endl;
    Elevator e;
    e.move(1, 3);
    assert(e.get_floor() == 3);
    e.move(5, 10);
    assert(e.get_floor() == 10);
    cout << "TEST 2-2: Move Down" << endl;
    e.move(10, 8);
    assert(e.get_floor() == 8);
    e.move(5, 3);
    assert(e.get_floor() == 3);
    cout << "TEST 2-3: Move Down and Up" << endl;
    e.move(1, 6);
    assert(e.get_floor() == 6);
    cout << "TEST 2-4: Move Up and Down" << endl;
    e.move(8, 5);
    assert(e.get_floor() == 5);
    cout << "----------TEST2 PASS----------" << endl;
}

int main() {
    cout << "Start Unit Test" << endl;
    test_invalid_floor();
    test_move();
    cout << "Tests all Pass" << endl;
    return 0;
}