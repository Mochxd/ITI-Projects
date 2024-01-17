#include <stdio.h>

void main(void) {
    
    /* int val =0;
    int length, num;
    printf("Enter the amount of numbes: ");
    scanf("%d", &length);
    for(int i=0; i<length; i++){
        printf("Enter num %d: ", i+1);
        scanf("%d", &num);
        if(num < 0){
            continue;
        }
        val = val + num;
        if(i == length){
            break;
        }
    }
    printf("Sum of the numbers is %d", val); */
    int i=1;
    int num;
    int sum=0;
    printf("Please Enter values to be sum terminated by 0: \n");
    printf("number %d: ",i);
    scanf("%d", &num);
    
    while(num!=0){
    sum += num;
    i++;
    printf("number %d: ",i);
    scanf("%d", &num);
    }
    printf("Sum of the %d numbers you entered is %d", --i,sum);
}


