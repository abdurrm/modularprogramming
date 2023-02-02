/* -----------------------------------------*/
/* Fungsi dengan parameter dan return value */
/* -----------------------------------------*/

#include <stdio.h>
#include <math.h>
double scale(double x, int n); /* function prototype */
int main(void) {
    double num_1;
    int num_2;
    printf("Masukkan bilangan real > ");
    scanf("%lf", &num_1);
    printf("Masukkan bilangan integer > ");
    scanf("%d", &num_2);
    printf("Hasil pemanggilan fungsi scale adalah %f\n", scale(num_1, num_2);
    return(0);
}
double scale(double x, int n) {
    double scale_factor;
    scale_factor=pow(10,n);
    return(x*scale_factor)
}