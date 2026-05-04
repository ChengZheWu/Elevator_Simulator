#pragma once

class Elevator {
   private:
    int current_floor = 1;
    int max_floor = 10;
    int min_floor = 1;

   public:
    Elevator();
    int get_floor();
    void display_floor();
    void move(int user_floor, int target_floor);
};