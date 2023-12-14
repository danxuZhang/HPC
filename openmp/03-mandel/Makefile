CC=clang
CFLAGS:=-O2 -Wall

OMP_NUM_THREADS ?= 4

all: mandel

format:
	clang-format *.c --style=Google -i

mandel:
	$(CC) $(CFLAGS) -fopenmp mandel.c -o mandel.out

run: mandel
	OMP_NUM_THREADS=$(OMP_NUM_THREADS) time ./mandel.out

clean:
	rm -f $(OUT)

