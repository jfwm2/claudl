CC=g++
SOURCES=$(wildcard *.cpp)
TARGETS=$(patsubst %.cpp,%,$(SOURCES))
PROGRAM=$(word 1,$(TARGETS))

default: all

all: $(TARGETS)

clean:
	rm -f $(TARGETS)

run: all
	./$(PROGRAM)
