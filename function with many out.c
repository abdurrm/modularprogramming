/* -----------------------------------------*/
/* Fungsi dengan parameter dan beberapa out */
/* -----------------------------------------*/

#include <stdio.h>
#include <math.h>
void separate(double num, char *signp, int *wholep, double *fracp); 
int main(void) {
    double value;
    char sn;
    int whl;
    double fr;
    printf("Masukkan nilai yang akan dianalisis > ");
    scanf("%lf", &value);
    separate(value, &sn, &whl, &fr);
    printf("Tanda bilangan : %c\n", sn);
    printf("Nilai magnitude bilangan : %d\n", whl);
    printf("Bagian pecahan dari bilangan : %.4f\n", fr);
    return(0);
}
void separate(double num, char *signp, int *wholep, double *fracp) {
    double magnitude;
    if (num < 0) *signp='-';
    else if (num==0) *signp=' ';
    else *signp='+';
    magnitude=fabs(num);
    *wholep=floor(magnitude);
    *fracp=magnitude - *wholep;
}