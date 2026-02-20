CC = gcc
LDFLAGS = 
TARGET = main
HEADERS = linked_list.h
SOURCES = main.c linked_list.c 
DEPENDENCIES = $(SOURCES) $(HEADERS)

all: $(TARGET)

$(TARGET): $(DEPENDENCIES)
	$(CC) $(SOURCES) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)
	
clean:
	rm -f $(TARGET)