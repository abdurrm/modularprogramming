/* -----------------------------==------------*/
/* Fungsi tanpa parameter tanpa return value */
/* -------------------------------------------*/


#include<stdio.h>
int main()
{
  int sum();
  int c = sum();
  printf("Sum = %d",c);
}
int sum() //function with no arguments and return data type
{
  int x=10,y=20,z=5;
  printf("x = %d ; y = %d ; z = %d \n",x,y,z);
  int sum = x+y+z;
  return(sum);
}