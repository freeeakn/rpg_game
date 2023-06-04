all:
	gcc main.c `pkg-config --libs --cflags raylib` -o YourGame

clean:
	rm -rf YourGame