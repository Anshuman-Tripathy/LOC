#include<stdio.h>
int main (){
    int num;
    printf("Enter any number\n");
    scanf("%d", &num);

    if(num > 0){
        printf("number is positive\n");
}
else if (num < 0){
      printf("number is negative\n");
}
 else {
    printf("number is zero\n");

 }

 return 0;
}