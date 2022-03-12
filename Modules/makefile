CC=clang
CFLAGS=-Wall -Werror --pedantic
LDFLAGS=
SOURCES=$(wildcard *.c)
HEADERS=$(wildcard *.h)
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=main

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $(EXECUTABLE)

%.o: %.c $(HEADERS)
	$(LINK.c) $< -c -o $@

clean:
	rm $(EXECUTABLE) $(OBJECTS)