OS = $(shell uname)
MAC = Darwin
CC = gcc


ifeq ($(OS),Linux)
	LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o YourGame
endif
ifeq ($(OS),Darwin)
	LIBS = `pkg-config --libs --cflags raylib` -o YourGame
endif

all:
	$(CC) main.c $(LIBS)

clean:
	rm -rf YourGame