/* ------------------------ */
/* Pengriman data Konstanta */
/* ------------------------ */
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
float luas(float sisi);
main()
{
 float luas_bs;
// clrscr();
 luas_bs = luas(4.25);
 cout<<"\nLuas Bujur Sangkar = "<<luas_bs;
 getch();
}
float luas(float sisi)
{
 return(sisi*sisi);
}