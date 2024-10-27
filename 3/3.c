// Largest prime factor
#include <stdio.h>
#include <math.h>

int is_prime(long long num) {
  for (int i=2; i<sqrtl(num); i++) {
    if (num%i==0)
      return 0;
  }
  return 1;
}

int main() {
  int max_prime_factor = -1;
  long long num = 600851475143;
  for (long long i=3; i<num/2; i++) {
    printf("%lld\n", i);
    if (is_prime(num/i) && num%i==0) {
      printf("NUM FOUND: %lld\n", num/i);
      return 0;
    }
  }
  return 0;
}
