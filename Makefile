CC = gcc
LDFLAGS = 
TARGET = main
HEADERS = linked_list.h
SOURCES = main.c linked_list.c 
DEPENDENCIES = $(SOURCES) $(HEADERS)

$(TARGET): $(DEPENDENCIES)
	$(CC) -o $@ $(SOURCES)
	
clean:
	rm -f $(TARGET)