#include<stdio.h>
int main (){
    int num1, num2;

    printf("Enter value of num1 : ");
    scanf("%f",&num1);

    printf("Enter value of num2 : ");
    scanf("%f",&num2);

        if(num1>num2){
            printf("num1 is greater than num2");
        }else{
            printf("num2 is greater than num1");
        }

      return 0;

}
