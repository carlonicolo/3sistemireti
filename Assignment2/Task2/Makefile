CC = gcc
CFLAGS = -Wall -Wextra -g
LDFLAGS = -lcheck -lm -lsubunit

# Files
MAIN = lab2.c


all: run_main 

main: $(SRC) $(MAIN)
	$(CC) $(CFLAGS) -o main $(SRC) $(MAIN)


run_main: main
	@echo "Running Main Program:"
	./main


clean:
	rm -f main 