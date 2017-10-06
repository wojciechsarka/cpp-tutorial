CC = g++
CFLAGS = -Wall -std=c++11
LFLAGS = -lm

INC = .

MAIN = main

TRIANGLE = src/Triangle
RECTANGLE = src/Rectangle
SQUARE = src/Square

AREAVISITOR = src/AreaVisitor
PRINTVISITOR = src/PrintVisitor

EXEC += $(MAIN).out
OBJS += $(MAIN).o

OBJS += $(TRIANGLE).o
OBJS += $(RECTANGLE).o
OBJS += $(SQUARE).o

OBJS += $(AREAVISITOR).o
OBJS += $(PRINTVISITOR).o

all: $(EXEC)

$(MAIN).out:$(MAIN).o $(SQUARE).o $(RECTANGLE).o $(TRIANGLE).o $(AREAVISITOR).o $(PRINTVISITOR).o
	$(CC) $^ -o $@

$(SQUARE).o: $(SQUARE).cpp $(INC)
	$(CC) -o $@ -c $(CFLAGS) $<

$(MAIN).o: $(MAIN).cpp $(INC)
	$(CC) -o $@ -c $(CFLAGS) $<

$(RECTANGLE).o: $(RECTANGLE).cpp $(INC)
	$(CC) -o $@ -c $(CFLAGS) $<

$(TRIANGLE).o: $(TRIANGLE).cpp $(INC)
	$(CC) -o $@ -c $(CFLAGS) $<

$(AREAVISITOR).o: $(AREAVISITOR).cpp $(INC)
	$(CC) -o $@ -c $(CFLAGS) $<

$(PRINTVISITOR).o: $(PRINTVISITOR).cpp $(INC)
	$(CC) -o $@ -c $(CFLAGS) $<

run:
	./$(MAIN).out

.PHONY: clean

clean:
	rm -f $(EXEC) $(OBJS)

