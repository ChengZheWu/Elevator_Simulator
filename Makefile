CXX = g++
CXXFLAGS = -std=c++17

TARGET = build/main
TEST_TARGET = build/test
SRCS = src/main.cpp src/Elevator.cpp
TEST_SRCS = src/test.cpp src/Elevator.cpp

all: main test

main: $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

test: $(TEST_SRCS)
	$(CXX) $(CXXFLAGS) $(TEST_SRCS) -o $(TEST_TARGET)

clean:
	rm -f &(TARGET)