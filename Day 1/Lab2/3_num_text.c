#include <stdio.h>

void main(void) {

    int number;
    printf("Enter integer number: ");
    scanf("%d", &number);

    if(number < 20){
        switch(number){
            case 0: 
            printf("Zero");
            break;
            case 1: 
            printf("One");
            break;
            case 2: 
            printf("Two");
            break;
            case 3: 
            printf("Three");
            break;
            case 4: 
            printf("Four");
            break;
            case 5: 
            printf("Five");
            break;
            case 6: 
            printf("Six");
            break;
            case 7: 
            printf("Seven");
            break;
            case 8: 
            printf("Eight");
            break;
            case 9: 
            printf("Nine");
            break;
            case 10: 
            printf("Ten");
            break;
            case 11: 
            printf("Elven");
            break;
            case 12: 
            printf("Twelve");
            break;
            case 13: 
            printf("thirteen");
            break;
            case 14: 
            printf("fourteen");
            break;
            case 15: 
            printf("fifteen");
            break;
            case 16: 
            printf("sixteen");
            break;
            case 17: 
            printf("seventeen");
            break;
            case 18: 
            printf("eighteen");
            break;
            case 19: 
            printf("nineteen");
            break;
    }
}
    else if(number >=0 && number < 99){
        int ten = number/10;
        int one = number % 10;
        switch(ten){
            case 2: 
            printf("twenty ");
            break;
            case 3: 
            printf("thirty ");
            break;
            case 4: 
            printf("Fourty ");
            break;
            case 5: 
            printf("Fivty ");
            break;
            case 6: 
            printf("Sixty ");
            break;
            case 7: 
            printf("Seventy ");
            break;
            case 8: 
            printf("Eighty ");
            break;
            case 9: 
            printf("Ninty ");
            break;
    }
    switch(one){
            case 1: 
            printf("One ");
            break;
            case 2: 
            printf("Two ");
            break;
            case 3: 
            printf("Three ");
            break;
            case 4: 
            printf("Four ");
            break;
            case 5: 
            printf("Five ");
            break;
            case 6: 
            printf("Six ");
            break;
            case 7: 
            printf("Seven ");
            break;
            case 8: 
            printf("Eight ");
            break;
            case 9: 
            printf("Nine ");
            break;
    } 
}
else{
    printf("Invalid Number You should input a number between 0 and 99");
}
    }