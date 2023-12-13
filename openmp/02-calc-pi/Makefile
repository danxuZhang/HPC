CC=clang
CFLAGS:=-Wall -O2

OMP_NUM_THREADS ?= 4

all: serial omp

format:
	clang-format *.c --style=Google -i

serial:
	$(CC) $(CFLAGS) serial.c -o serial.out

run-serial: serial
	time ./serial.out

omp:
	$(CC) $(CFLAGS) -fopenmp omp.c -o omp.out

run-omp:
	OMP_NUM_THREADS=$(OMP_NUM_THREADS) time ./omp.out

run: all
	time ./serial.out
	OMP_NUM_THREADS=$(OMP_NUM_THREADS) time ./omp.out 

clean:
	rm -f *.out

