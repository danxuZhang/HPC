CC=clang
CFLAGS:=-O2 -Wall

OMP_NUM_THREADS ?= 4

all: mandel

format:
	clang-format *.c --style=Google -i

mandel:
	$(CC) $(CFLAGS) -fopenmp mandel.c -o mandel.out

run: 
	OMP_NUM_THREADS=$(OMP_NUM_THREADS) time ./mandel.out

benchmark:
	for i in 1 2 4 8; do \
		echo "\nWith $$i threads:"; \
		time OMP_NUM_THREADS=$$i ./mandel.out; \
	done

clean:
	rm -f $(OUT)

