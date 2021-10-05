#include <stdio.h>
int factorsum(int n, int f) {
  int factors = n / f;
  return factors * (factors + 1) * f;
}
int euler1(int n) {
  int num = n - 1;
  return (factorsum(num, 3) + factorsum(num, 5) - factorsum(num, 15)) / 2;
}
int gcf(int a, int b) {
  if (b == 0) {
    return a;
  }
  else {
    return gcf(b, a % b);
  }
}
int lcm(int a, int b) {
  return a * b / gcf(a, b);
}
int euler5(int n) {
  int total_lcm = 1;
  for (int i = 2; i < n; i ++) {
    total_lcm = lcm(total_lcm, i);
  }
  return total_lcm;
}
int sum_of_squares(int n) {
  int square = 0;
  int sum = 0;
  int n2 = n * 2;
  for (int i = 1; i <= n2; i += 2) {
    square += i;
    sum += square;
  }
  return sum;
}
int square(int n) {
  return n * n;
}
int square_of_sum(int n) {
  return square(n * (n + 1) / 2);
}
int euler6(int n) {
  return square_of_sum(n) - sum_of_squares(n);
}
