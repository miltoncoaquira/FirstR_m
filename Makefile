CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

OBJ = main.o Complejo.o
EXEC = programa

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

main.o: main.cpp Complejo.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Complejo.o: Complejo.cpp Complejo.h
	$(CXX) $(CXXFLAGS) -c Complejo.cpp

clean:
	rm -f $(OBJ) $(EXEC)
