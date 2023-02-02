/* -----------------------------==------------*/
/* Fungsi dengan parameter tanpa return value */
/* -------------------------------------------*/


#include <stdio.h>
int main()
{
  void sum(float,float); //function with arguments and no return value
  float x=10.56,y=7.22;
  sum(x,y);
}
void sum(float a,float b) //function with arguments and no return value
{
  float z = a+b;
  printf("x + y = %f",z);
}