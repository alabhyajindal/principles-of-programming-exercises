#include <stdio.h>
/*
 * Complete the recursive function below which performs multiplication of two
 * numbers without using the inbuilt * sign
 */
int multiply_iterative(int number, int by)
{
  int result = 0;
  for (int i = 0; i < by; i++)
  {
    result += number;
  }
  return result;
}

int multiply_recursive(int number, int by)
{
  if (by == 1)
  {
    return number;
  }
  else
  {
    return number + multiply_recursive(number, by - 1);
  }
}

int main(void)
{
  printf("The multiplication of 2 by 3 is %d\n", multiply_iterative(2, 3));
  printf("The multiplication of 2 by 3 is %d\n", multiply_recursive(2, 3));
  printf("The multiplication of 10 by 5 is %d\n", multiply_recursive(10, 5));
  return 0;
}
