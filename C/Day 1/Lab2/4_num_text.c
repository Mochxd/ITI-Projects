#include <stdio.h>

void main(void) {
    
// Declare variables
    int number;

// Get number from the user
    printf("Enter integer number between 0 and 999: ");
    scanf("%d", &number);

// check if the number between 0 and 999
if (number < 0 || number > 999) {
        printf("Please enter a number between 0 and 999\n");
    }

// handle numbers between 0 and 20
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
// Handle numbers from 20 to 99
    else if(number >=20 && number < 99){
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
// Handle numbers from 100 to 999
    else if (number >= 100 && number <= 999) {
            int hundred = number / 100;
            int ten1 = (number / 10) % 10;
            int one1 = number % 10;
            int ten2 = number % 100 /10;
        
            switch(hundred){
                case 1: 
                printf("One hundred");
                break;
                case 2: 
                printf("Two hundred");
                break;
                case 3: 
                printf("Three hundred");
                break;
                case 4: 
                printf("Four hundred");
                break;
                case 5: 
                printf("Five hundred");
                break;
                case 6: 
                printf("Six hundred");
                break;
                case 7: 
                printf("Seven hundred");
                break;
                case 8: 
                printf("Eight hundred");
                break;
                case 9: 
                printf("Nine hundred");
                break;
        }
            if(number % 100 < 20){
                switch(number % 100){
                    case 1: 
                    printf(" One");
                    break;
                    case 2: 
                    printf(" Two");
                    break;
                    case 3: 
                    printf(" Three");
                    break;
                    case 4: 
                    printf(" Four");
                    break;
                    case 5: 
                    printf(" Five");
                    break;
                    case 6: 
                    printf(" Six");
                    break;
                    case 7: 
                    printf(" Seven");
                    break;
                    case 8: 
                    printf(" Eight");
                    break;
                    case 9: 
                    printf(" Nine");
                    break;
                    case 10:
                    printf(" Ten");
                    break;
                    case 11: 
                    printf(" Elven");
                    break;
                    case 12: 
                    printf(" Twelve");
                    break;
                    case 13: 
                    printf(" thirteen");
                    break;
                    case 14: 
                    printf(" fourteen");
                    break;
                    case 15: 
                    printf(" fifteen");
                    break;
                    case 16: 
                    printf(" sixteen");
                    break;
                    case 17: 
                    printf(" seventeen");
                    break;
                    case 18: 
                    printf(" eighteen");
                    break;
                    case 19: 
                    printf(" nineteen");
                    break;
                    }
            }else if (number % 100 > 20){
                switch(ten2){
                        case 2: 
                        printf(" twenty ");
                        break;
                        case 3: 
                        printf(" thirty ");
                        break;
                        case 4: 
                        printf(" Fourty ");
                        break;
                        case 5: 
                        printf(" Fivty ");
                        break;
                        case 6: 
                        printf(" Sixty ");
                        break;
                        case 7: 
                        printf(" Seventy ");
                        break;
                        case 8: 
                        printf(" Eighty ");
                        break;
                        case 9: 
                        printf(" Ninty ");
                        break;
                }
                switch(one1){
                        case 1: 
                        printf(" One ");
                        break;
                        case 2: 
                        printf(" Two ");
                        break;
                        case 3: 
                        printf(" Three ");
                        break;
                        case 4: 
                        printf(" Four ");
                        break;
                        case 5: 
                        printf(" Five ");
                        break;
                        case 6: 
                        printf(" Six ");
                        break;
                        case 7: 
                        printf(" Seven ");
                        break;
                        case 8: 
                        printf(" Eight ");
                        break;
                        case 9: 
                        printf(" Nine ");
                        break;
            }
        }
    }
}