/* -------------------------------------*/
/* Fungsi dengan parameter input/output */
/* -------------------------------------*/

#include <stdio.h>
void order(double *smp, double *lgp); /* function prototype */
int main(void) {
    double num1, num2, num3;
    printf("Masukkan tiga bilangan yang dipisahkan dengan spase > ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    order(&num1, &num2);
    order(&num1, &num3);
    order(&num2, &num3);
    printf("Bilangan sudah terurut: %.2f %.2f %.2f\n", num1, num2, num3);
    return(0);
}
void order(double *smp, double *lgp) {
    double temp;
        if (*smp > *lgp) {
        temp = *smp;
        *smp=*lgp;
        *lgp=temp;
    }
}