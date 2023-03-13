/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int calminimum(int n1 ,int n2)
{
  int min;
  if(n1 < n2)
  {
    min = n1;
    return n1
  }
}      
  
  int calmaximum(int n1, int n2)
  {
    int max;
    if(n1 > n2)
    {
      max = n1
      return n2;
    }
  }
int calmultiply(int n1 , int n2)
{
  int multiple;
  multiple = n1 * n2;
  return multiple;
}
