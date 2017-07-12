.PHONY: all clean install uninstall

CC=g++
STDFLAG=-std=c++11
COMPILEFLAGS=-c
TARGET=stackality.exe
OBJSOURCES=main.o stack.o queue.o stackExtended.o

$(TARGET): $(OBJSOURCES)
	$(CC) $(STDFLAG) -o $(TARGET) $(OBJSOURCES)

main.o: main.cpp
	$(CC) $(STDFLAG) $(COMPILEFLAGS) -o main.o main.cpp
queue.o: queue.cpp
	$(CC) $(STDFLAG) $(COMPILEFLAGS) -o queue.o queue.cpp
stack.o: stack.cpp
	$(CC) $(STDFLAG) $(COMPILEFLAGS) -o stack.o stack.cpp
stackExtended.o: stackExtended.cpp
	$(CC) $(STDFLAG) $(COMPILEFLAGS) -o stackExtended.o stackExtended.cpp
