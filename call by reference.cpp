/* ---------------------------- */
/* Penggunaan Call By Reference */
/* Program Pertukaran Nilai */ 
/* ---------------------------- */
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int tukar(int *x, int *y);                  // <-- pointer pada parameter formal
main()
{
 int a, b;
 a = 88;
 b = 77;
 clrscr();
 cout<<"Nilai Sebelum Pemanggilan Fungsi";
 cout<<"\na = "<<a<<" b = "<<b;
 tukar(&a,&b);                              // <-- address pada parameter aktual
 cout<<endl;
 cout<<"\nNilai Setelah Pemanggilan Fungsi";
 cout<<"\na = "<<a<<" b = "<<b;
 getch();
}
int tukar(int *x, int *y)
{
 int z;
 z = *x;
 *x = *y;
 *y = z;
 cout<<endl;
 cout<<"\nNilai di Akhir Fungsi Tukar()";
 cout<<"\nx = "<<*x<<" y = "<<*y;
}
