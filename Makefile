CC = gcc
TARGET = hello
OBJS = main.o tools.o

$(TARGET):$(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) -c $< -o $@
clean:
	rm -f $(TARGET)*.o

