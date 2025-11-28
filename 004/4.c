#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ran into issue with 0s getting removed when going down, just going to convert to string instead.
// 
/* int get_first_num(int num) { */
/*   int first_num = powf(10, log10(num) - (int)log10(num)); */
/*   return first_num; */
/* } */

/* int is_palindrome(int num) { */
/*   int flag = 1; */
/*   for (int i=0; i<log10(num/2); i++) { */
/*     printf("%d %d\n", get_first_num(num), num%10); */
/*     if (num%10 != get_first_num(num)) { */
/*       return 0; */
/*     } */
/*     num = num/10; */
/*     num = num - get_first_num(num) * powf(10, (int)log10(num)); */
/*     printf("new num: %d\n", num); */
/*   } */
/*   return 1; */
/* } */

int is_palindrome(int num) {
  char *s = malloc(sizeof(char) * (log10(num)+2)); //+1 for extra number missing from log10, +1 for string terminator
  sprintf(s, "%d", num);
  for (int i=0; i<strlen(s)/2; i++) {
    if (s[i]!=s[strlen(s)-1-i])
      return 0;
  }
  return 1;
}

void run_prod_search() {
  int largest = 0;
  for (int i=1; i<1000; i++) {
    for (int j=1; j<1000; j++) {
      int prod = i*j;
      if (is_palindrome(prod)) {
	printf("palindrome found: %d\n", prod);
	if (prod>largest)
	  largest=prod;
      }
    }
  }
  printf("%d\n", largest);
}

int main() {
  //printf("%d\n", is_palindrome(90009));
  run_prod_search();
  return 0;
}
