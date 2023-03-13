/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float distance;
  float newdistance;
  float amount1,amount2,totalamount;

  printf("Enter the travelled distance : ");
  scanf("%f",&distance);

  if(distance <= 30)
  {
    amount1 = distance * 50.00;
  }
  else if(distance > 30)
  {
    newdistance = distance - 30;
    amount2 = newdistance * 40.00;
  }
  totalamount = amount1 + amount2;
  printf("Total amount for your distance is %.2f",totalamount);
  return 0;
}
