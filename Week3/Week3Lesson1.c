#include <stdio.h>

/* 
 Modify the function below so that it prints out the square multiplication tables for any number.  How might you modify this function, or add a new function, so it prints out the multiplication tables for any range of numbers?

 */

void squareMultTable(int n){
    int i = 1;
    while (i < 11) {
        printf("%d\n", i * n);
        i++;
    }
}

int main(void) {
  squareMultTable(7);
  return 0;
}
