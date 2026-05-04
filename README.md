# Elevator Simulator

Develop an elevator system that has two elevators and ten floors, including a user interface that allows users to input the desired floor number, and the current floor for each elevator should be displayed.

## Introduction:
1. Define a class called "Elevator" that has the following attributes and methods:
Attributes:
    - "current_floor": an integer representing the current floor of the elevator.
2. Methods:
    - "display_floor()": a method that displays the current floor of the elevator.
    - "move(current: int, floor: int)": a method that moves the elevator to the specified floor. This method should set the "current_floor" attribute to the specified floor and call the "display_floor()" method to display the current floor.
3. Create two "Elevator" objects named "elevator1" and "elevator2".
4. Implement a user interface that allows users to input their current floor and the desired floor number.
    - The program will move the elevators to the specified floors and display their current floors.
    - The system dispatches the closer elevator. If both are on the same floor, it uses a toggle flag to alternate between them, ensuring balanced usage.
5. The elevator moving speed is one floor per second.

## How to build this enviroment
1. Download VS code, docker, VS code extension - Dev Containers
2. open VS code
```
cd ./Elevator_Simulator
code .
```
3. press "CTRL+SHIFT+P" and enter "Dev Containers: Reopen in Container"


## How to run
1. Compile the code
```
cd ./Elevator_Simulator
make
```
2. Run
```
./build/main
```
3. You will see the user interface, and enter your current floor and target floor.
```
Start the Elevator1 ...
Welcome, this Elevator only has 1F ~ 10F
Start the Elevator2 ...
Welcome, this Elevator only has 1F ~ 10F
Enter your current floor:
```

## How to test
1. Compile the code
```
cd ./Elevator_Simulator
make
```
2. Run
```
./build/test
```
3. Tests Start
    - Test 1: Invalid Input
        - Test 1-1: Invalid Floor
            - Test if the input floor are over the range.
        - Test 1-2: Same Floor
            - Test if the user floor are the same as the target floor.
    - Test 2: Move
        - Test 2-1: Move Up
        - Test 2-2: Move Down
        - Test 2-3: Move Down and Up
        - Test 2-4: Move Up and Down