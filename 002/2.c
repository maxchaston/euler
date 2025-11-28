#include <stdio.h>
int main() {
  int total=0;
  int prev1=1;
  int prev2=1;
  while (total<4000000) {
    int current = prev1+prev2;
    prev2=prev1;
    prev1=current;
    if (current%2==0)
      total+=current;
  }
  printf("%d\n", total);
  return 0;
}
