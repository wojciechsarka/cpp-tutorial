CC = g++
CFLAGS = -Wall -std=c++11
LFLAGS = -lm

INC = .

SINGLETON = singleton_main
LOGGER 	  = src/Logger

OBJS += $(LOGGER).o

EXEC += $(SINGLETON).out
OBJS += $(SINGLETON).o

all: $(EXEC)

$(SINGLETON).out:$(SINGLETON).o $(LOGGER).o
	$(CC) -pthread $^ -o $@

$(SINGLETON).o: $(SINGLETON).cpp $(INC)
	$(CC) -pthread -o $@ -c $(CFLAGS) $<

$(LOGGER).o: $(LOGGER).cpp $(INC)
	$(CC) -pthread -o $@ -c $(CFLAGS) $<


run:
	./$(SINGLETON).out

.PHONY: clean

clean:
	rm -f $(EXEC) $(OBJS)

