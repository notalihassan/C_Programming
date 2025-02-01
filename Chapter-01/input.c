#include <stdio.h>
int main(){

    // Input Cases
    // %d, %f, %c  (format specifier)

    // scanf("line .... %d(data type)", &variable_name);  
    // & means address o variable where the value will be stored.

    
    // %d for integer
    int age;
    printf("enter your age: ");
    scanf("%d", &age); 
    printf("Your age is %d \n", age);

    // %f for real or float numbers
    // find area?
    float length,width;
    printf("Enter the value of length = ");
    scanf("%f", &length);

    printf("Enter the value of width = ");
    scanf("%f", &width);

    printf("The area is equal to :  %f \n", length*width);

    

    // sum two inteers
    
    int a,b;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);

    int sum = a + b;
    printf("The value of Sum is equal to : %d", sum);


}