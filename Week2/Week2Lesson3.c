#include <stdio.h>
#include <stdbool.h>

/*
 * Write a function which returns true if a number is divisible by 3 and
 * false if it is not.  Hint: use the modulo (%) operator.
 *
 * Modify your code so that your function now returns true if a number is divisible
 * by 3 or 5 and false if it is not.
 *
 */

bool check_div(int n)
{
  if (n % 3 == 0 || n % 5 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main(void)
{
  bool check27 = check_div(27);
  printf("%d\n", check27);
  bool check20 = check_div(20);
  printf("%d\n", check20);
  bool check73 = check_div(73);
  printf("%d\n", check73);
  return 0;
}
