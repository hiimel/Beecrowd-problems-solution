// link: https://judge.beecrowd.com/en/problems/view/1005 

#include<stdio.h>
int main() {
    double A, B, MEDIA;
    scanf("%lf %lf",&A,&B);

    double avg = (A*3.5 + B*7.5)/11;
    printf("MEDIA = %.5lf\n",avg);

    return 0;

}
