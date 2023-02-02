/* ------------------------ */
/* Penggunaan Call By Value */
/* Program Pertukaran Nilai */
/* ------------------------ */
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int tukar(int x, int y);                        // <-- variabel aktual pada parameter formal
main()
{
 int a, b;
 a = 88;
 b = 77;
 clrscr();
 cout<<"Nilai Sebelum Pemanggilan Fungsi";
 cout<<"\na = "<<a<<" b = "<<b;
 tukar(a,b);                                    // <-- variabel aktual pada parameter aktual
 cout<<"\nNilai Setelah Pemanggilan Fungsi";
 cout<<"\na = "<<a<<" b = "<<b;
 getch();
}
int tukar(int x, int y)                        
{
 int z;
 z = x;
 x = y;
 y = z;
 cout<<"\n\nNilai di dalam Fungsi Tukar()";
 cout<<"\nx = "<<x<<" y = "<<y;
 cout<<endl;
}
