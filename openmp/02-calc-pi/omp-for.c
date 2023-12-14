#include <omp.h>
#include <stdio.h>

static const long num_steps = 100000000;
static const double step = 1.0 / (double)num_steps;

double calculate_pi() {
  double sum = 0.0;

#pragma omp parallel for reduction(+ : sum)
  for (int i = 0; i < num_steps; ++i) {
    double x = (i + 0.5) * step;
    sum += 4.0 / (1.0 + x * x);
  }

  return step * sum;
}

int main() {
  double start = omp_get_wtime();
  double pi = calculate_pi();
  double end = omp_get_wtime();

  printf("Calculated pi: %f\n", pi);
  printf("Elapsed time: %.8f\n", end - start);

  return 0;
}
