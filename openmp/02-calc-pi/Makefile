CC=clang
CFLAGS:=-Wall -O2

all: serial omp-for omp-spmd

format:
	clang-format *.c --style=Google -i

serial:
	$(CC) $(CFLAGS) serial.c -o serial.out

run-serial: serial
	time ./serial.out

omp-for:
	$(CC) $(CFLAGS) -fopenmp omp-for.c -o omp-for.out

omp-spmd:
	$(CC) $(CFLAGS) -fopenmp omp-spmd.c -o omp-spmd.out

clean:
	rm -f *.out

