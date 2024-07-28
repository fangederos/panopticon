CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = task_manager
SRCDIR = src
INCDIR = include
SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) -lncurses

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
