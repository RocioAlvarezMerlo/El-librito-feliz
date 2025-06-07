CXX=g++
CXXFLAGS=-std=c++17 -Wall
INCLUDES=-Iinclude
SRCS=$(wildcard src/*.cpp)
OBJS=$(SRCS:.cpp=.o)
TARGET=bin/librito

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
