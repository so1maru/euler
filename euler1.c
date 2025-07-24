#include <stdio.h>

int sumDivBy(int n) {
  int p = 999 /n;
  return n * (p * (p + 1)) / 2;
}

int main() {
  printf("%d\n", sumDivBy(3) + sumDivBy(5) - sumDivBy(15));
  return 0;
}
