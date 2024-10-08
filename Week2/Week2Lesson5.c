#include <stdio.h>
/*
 * Complete the fibonacci function below such that it calculates the
 * nth term of the Fibonacci sequence using iteration.
 *
 * The first 4 terms of the Fibonacci sequence in this example
 * are  1, 1, 2, 3
 *
 * For example if we call fibonacci(1) we should get the value 1 returned,
 * if we call fibonacci(4) we should get the value 3 returned.
 */
long int fibonacci(long int term)
{
  if (term == 1 || term == 2)
  {
    return 1;
  }
  long int prev = 1;
  long int next = 1;
  for (long int i = 3; i <= term; i++)
  {
    long int temp = next;
    next = prev + next;
    prev = temp;
  }
  return next;
}

long int main(void)
{
  long int test_1 = fibonacci(4);
  printf("%ld\n", test_1);
  long int test_2 = fibonacci(91);
  printf("%ld\n", test_2);
  return 0;
}
