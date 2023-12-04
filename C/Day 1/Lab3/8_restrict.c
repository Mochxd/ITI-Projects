#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char ch ;
    int count =0;
    int number =0;

    printf("please enter integer max 5 digit :");
    do{
            // getche show input
        ch = getch();
        switch(ch)
        {
        case'0':
        case'1':
        case'2':
        case'3':
        case'4':
        case'5':
        case'6':
        case'7':
        case'8':
        case'9':
            if(count <5)
            {
                putch(ch);
                count++;
                number = number*10+ch-'0';
            }
            break;
        case 8:

            if(count >0)
            {
                putch('\b');
                putch(' ');
                putch('\b');
                count--;
                number = number/10;
            }
            break;
        }
    }while(ch!=13);
     printf("\nnumber = %d",number);
}
