#include <omp.h>
#include <stdio.h>

static const long num_steps = 1000000;
static const double step = 1.0 / (double) num_steps;

double calculate_pi() {
    double sum = 0.0;
    
#pragma omp parallel for reduction(+:sum)
    for (int i = 0; i < num_steps; ++i) {
        double x = (i + 0.5) * step;
        sum += 4.0 / (1.0 + x * x);
    }
    
    return step * sum;
}

int main() {
  double pi = calculate_pi();

  printf("Calculated pi: %f\n", pi);

  return 0;
}
