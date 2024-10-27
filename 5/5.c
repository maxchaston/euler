#include <stdio.h>
int main() {
  int x = 1;
  while (1) {
    x++;
    int i;
    for (i=2; i<21; i++) {
      if (x%i!=0)
	break;
    }
    if (i>10) {
      printf("%d\n", i);
      printf("%d\n", x);
    }
    if (i==21) {
      return 0;
    }
  }
  return 0;
}
