#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userinput;

    do
        {
            printf("Choose an option: \n1. New Game \n2. Load Game \n3. More Options \n4. Quit\n\nYour Selection: \n");
            scanf("%d", &userinput);
            switch(userinput)
            {
                case 1:
                printf("You Chose New Game!\n\n");
                break;

                case 2:
                printf("You Chose Load Game!\n\n");
                break;

                case 3:
                printf("You Chose More Options!\n\n");
                break;

                case 4:
                printf("You Chose Quit!\n\n");
                break;

            }
        }
    while(userinput != 4);

    //printf("Hello world!\n");
    return 0;
}
