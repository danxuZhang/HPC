CC=clang
CFLAGS=-fopenmp

SOURCE=main.c

OUT=main.out

OMP_NUM_THREADS ?= 4

all: main

format:
	clang-format $(SOURCE) --style=Google -i

main:
	$(CC) $(CFLAGS) $(SOURCE) -o $(OUT)

run: main
	OMP_NUM_THREADS=$(OMP_NUM_THREADS) ./$(OUT)

clean:
	rm -f $(OUT)

