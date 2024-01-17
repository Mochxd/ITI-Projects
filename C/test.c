#include <stdio.h>

void main(void) {
    
    int val =0;
    int count;

    printf("Enter the amount of numbes: ");
    scanf("%d", count);
    for(int i=0; i<count; i++){
        printf("Enter num %d: ", i+1);
        scanf("%d", count);
    
        val = val + count;
    }
    printf("Sum of the numbers is %d", val);
}
