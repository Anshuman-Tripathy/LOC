#include<stdio.h>
int main(){

    int a,b ;
    int option;
    printf("1. Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the value of a & b: ");
    scanf("%d %d", &a, &b);
        
    printf("enter your choice:");
    scanf("%d", &option);
    switch(option)
    {
        case 1:
        printf("sum of %d and %d is:%d",a,b,a+b);
        break;

        case 2:
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4:
        printf("Division of %d and %d is : %d",a,b,a/b);
        break;
    default:
        printf("Enter Correct Choice");
        break;
    }
    return 0;

    }