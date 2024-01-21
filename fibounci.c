#include <stdio.h>
int factorial(int num);
void main(void) {
    // int n;
    // int f1, f2,f;
    // printf("How many Series of Fibonacci do you want: ");
    // scanf("%d", &n);
    // f1=-1;
    // f2=1;
    // do{
    //     f=f1+f2;
    //     printf("%d\n",f);
    //     f1=f2;
    //     f2=f;
    //     n--;
    // }while(n>=1);
    int num;
    printf("Enter integer number: ");
    scanf("%d", &num);
    printf("The factorial of the number %d is %d", num,factorial(num));
    }
    int factorial(int num){
        int f=1;
        for(int i=num; i>0 ;i--){
            f *= i;
        }
        return f;
    }