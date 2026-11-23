#include <stdio.h>
#include "numlib.h"

// dokumentace
// vic dokumentace
int main(void) {
  int values[] = { 2, 4, 6, 8 };

  printf("min(3, 7) = %d\n", min_int(3, 7));
  printf("max(3, 7) = %d\n", max_int(3, 7));
  printf("average = %.2f\n", average_int_array(values, 4));
  return 0;
}
