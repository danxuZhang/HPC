CC=clang
CFLAGS:=-O2 -Wall

OMP_NUM_THREADS ?= 4

all: main

format:
	clang-format *.c --style=Google -i

main:
	$(CC) $(CFLAGS) -fopenmp main.c -o main.out

run: 
	OMP_NUM_THREADS=$(OMP_NUM_THREADS) time ./main.out

benchmark:
	for i in 1 2 4 8; do \
		echo "\nWith $$i threads:"; \
		time OMP_NUM_THREADS=$$i ./main.out; \
	done

clean:
	rm -f $(OUT)

