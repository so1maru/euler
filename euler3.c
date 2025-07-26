#include <stdio.h>
#include <stdbool.h>

bool isPrime(long long n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  for (long long i = 3; i * i <= n; i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  long long max = 0;
  long long n = 600851475143;
  for (long long i = 3; i * i <= n; i += 2) {
    if (n % i == 0 && isPrime(i) && i > max) {
      max = i;
    }
  }
  if(isPrime(n)) max = n;
  printf("%lld\n", max);
}
