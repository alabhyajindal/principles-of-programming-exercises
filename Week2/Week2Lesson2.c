#include <stdio.h>

/* Create a function that contains a local variable n. Initialise this variable
 * to 100 and print to the screen the value of n*n.
 *
 * Modify your code so that you can print out the result of this calculation
 * in the main function. Do this both via a return in the function you have
 * defined and by using a global variable.
 */

int n = 0;

int foo(int value)
{
  n = value;
  return n;
}

int main(void)
{
  printf("%d\n", n);
  foo(100);
  printf("%d\n", n);
  foo(42);
  printf("%d\n", n);
  return 0;
}
