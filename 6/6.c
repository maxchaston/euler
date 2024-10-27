#include <stdio.h>
#include <math.h>
int main() {
  int sum=0;
  int sum_of_squares=0;
  int square_of_sum;
  for (int i=1; i<101; i++) {
    sum+=i;
    sum_of_squares+=pow(i,2);
  }
  square_of_sum = pow(sum, 2);
  printf("%d\n", square_of_sum-sum_of_squares);
  return 0;
}
