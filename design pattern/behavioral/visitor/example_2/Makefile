CC = g++
CFLAGS = -Wall -std=c++11
LFLAGS = -lm

INC = .

MAIN = main

TRIANGLE = src/Triangle
RECTANGLE = src/Rectangle
SQUARE = src/Square

TYPEINFOVISITOR = src/TypeInfoVisitor

EXEC += $(MAIN).out
OBJS += $(MAIN).o

OBJS += $(TYPEINFOVISITOR).o

all: $(EXEC)

$(MAIN).out:$(MAIN).o $(TYPEINFOVISITOR).o
	$(CC) $^ -o $@

$(TYPEINFOVISITOR).o: $(TYPEINFOVISITOR).cpp $(INC)
	$(CC) -o $@ -c $(CFLAGS) $<

$(MAIN).o: $(MAIN).cpp $(INC)
	$(CC) -o $@ -c $(CFLAGS) $<

run:
	./$(MAIN).out

.PHONY: clean

clean:
	rm -f $(EXEC) $(OBJS)

