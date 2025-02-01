#include<stdio.h>
int main(){

    // calculate area of circle Area = pi * r square

    float r;
    printf("Enter the value of r = ");
    scanf("%f", &r);
    float area = 3.14 * (r*r);
    printf("Area of circle is : %f", area);
}