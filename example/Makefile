CC      := g++
CFLAGS  :=-Wall -std=c++11 -O2

TARGET  := Demo
CLIBS   := -lCSLog -llog4cplus
INCLUDES:= -I ../include/
SRCS    :=$(wildcard *.cpp)
OBJS    :=$(patsubst %cpp, %o, $(SRCS))
all     : $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(CLIBS)
%.o:%.cpp
	$(CC) -c $(INCLUDES) $(CFLAGS) $^
clean:
	rm -rf *.o $(TARGET) $(OBJS)



