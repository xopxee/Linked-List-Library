CC = gcc
LDFLAGS = 
TARGET = main
HEADERS = linked_list.h
SOURCES = linked_list.c main.c  
DEPENDENCIES = $(SOURCES) $(HEADERS)

all: $(TARGET)

$(TARGET): $(DEPENDENCIES)
	$(CC) $(SOURCES) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)
	
clean:
	rm -f $(TARGET)