/* ------------------------ */
/* Pengriman data Variable  */
/* ------------------------ */
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
luas(float sisi);
main()
{
 float luas_bs, sisi_bs;
// clrscr();
 cout<<"\nMenghitung Luas Bujur Sangkar"<<endl;
 cout<<"\nMasukan Nilai Sisi Bujur Sangkar : ";
 cin>>sisi_bs;
 luas_bs = luas(sisi_bs);
 cout<<"\nLuas Bujur Sangkar = "<<luas_bs<<" Cm";
 getch();
}
luas(float sisi)
{
 return(sisi*sisi);
}