CC      := g++ -std=c++11
CFLAGS  :=-Wall -O2 -shared -fPIC

TARGET  := libCSLog.so
CLIBS   := -llog4cplus
INCLUDES:=-I ../include/
SRCS    :=$(wildcard *.cpp)
OBJS    :=$(patsubst %cpp, %o, $(SRCS))
all     : $(TARGET)
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(INCLUDES)  $(SRCS) -o $@ $(CLIBS)
#%.o:%.cpp
#	$(CC) -c $(INCLUDES)  $^ -o $@

install:
	sudo cp $(TARGET) /usr/local/lib
	sudo ldconfig


clean:
	rm -rf *.o $(TARGET) $(OBJS)
