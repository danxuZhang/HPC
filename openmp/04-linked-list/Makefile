CC=clang
CFLAGS:=-O2 -Wall

OMP_NUM_THREADS ?= 4

all: omp-for omp-task

format:
	clang-format *.c --style=Google -i

omp-for:
	$(CC) $(CFLAGS) -fopenmp omp-for.c -o omp-for.out

run-for: 
	OMP_NUM_THREADS=$(OMP_NUM_THREADS) ./omp-for.out

benchmark-for:
	for i in 1 2 4 8; do \
		echo "\nWith $$i threads:"; \
		OMP_NUM_THREADS=$$i ./omp-for.out; \
	done

omp-task:
	$(CC) $(CFLAGS) -fopenmp omp-task.c -o omp-task.out

run-task: 
	OMP_NUM_THREADS=$(OMP_NUM_THREADS) ./omp-task.out

benchmark-task:
	for i in 1 2 4 8; do \
		echo "\nWith $$i threads:"; \
		OMP_NUM_THREADS=$$i ./omp-task.out; \
	done

run: run-for run-task
clean:
	rm -f *.out

