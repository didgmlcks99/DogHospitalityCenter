#Makefile
CC = gcc
CFLAG = -W -Wall
TARGET = dogCenter
OBJECTS = dogCenter.c basicFunction.o additionalFunction.o
all = $(TARGET)
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAG) $^ -o $@
clean :
	rm *.o dogCenter