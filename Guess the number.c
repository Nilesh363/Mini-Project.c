#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    system("Color 4F");
    int number,guess,numberofguess=0;
    srand(time(0));
    number=rand()%100;
    printf("\nGuess the number between 1 and 100\n");
    do
    {
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("\nNo! Lower the number\n");
            numberofguess++;
        }
        else if(number>guess)
        {
            printf("\nNo! Higher the number\n");
            numberofguess++;
        }
        else
            printf("\nCongrats You guessed the number in %d attempts!\n",numberofguess);
    }
    while(guess!=number);
}
