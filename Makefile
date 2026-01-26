CXX = g++

CXXFLAGS = -Wall -std=c++11 -g

TARGET = main.exe

all: $(TARGET)

$(TARGET): main.o #ordenador.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o 
# ordenador.o

main.o: main.cpp #ordenador.h
	$(CXX) $(CXXFLAGS) -c main.cpp

#ordenador.o: ordenador.cpp ordenador.h
#	$(CXX) $(CXXFLAGS) -c ordenador.cpp


clean:
	rm -f *.o $(TARGET)