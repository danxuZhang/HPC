CC=clang
CFLAGS:=-O2 -Wall

SOURCES := pi_mc.c random.c

OUT := pi_mc.out

OMP_NUM_THREADS ?= 4

all: pi_mc

clean:
	rm -f *.out

format:
	clang-format --style=Google -i *.c

pi_mc:
	$(CC) $(CFLAGS) -fopenmp -o $(OUT) $(SOURCES)

run: 
	time ./$(OUT) OMP_NUM_THREADS=$(OMP_NUM_THREADS)

