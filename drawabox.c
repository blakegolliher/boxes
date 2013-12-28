#include<stdio.h>

int main( int argc, char *argv[] )
{
    if( argc == 3 )
        {
        printf("The sizes are %s, and %s.\n", argv[1],argv[2]);
        }
    else if( argc > 3 )
        {
        printf("Too many arguments supplied, I only need two.\n");
        return 0;
        }
    else if( argc < 3 )
        {
        printf(" 2 arguments expected, I didn't get enough.\n");
        return 0;
        }

    int height;
    int width;

    int arg1 = atoi(argv[1]);
    int arg2 = atoi(argv[2]);

    for (width = 0 ; width < arg1 ; width++)                 // sets the width of the top line
    {
        printf("*");                                         // print the top
    }
    printf("\n");                                            //carrage return for the top

    for (height = 0 ; height < (arg2 - 2); height++)         // set the hight, this is how
                                                             // many times the middle loops run
    {
            printf("|");                                     // print left side of box

        for (width = 0 ; width < (arg1 - 2) ; width++)       // box is 18 wide in the middle
        {
            printf(" ");                                     //print middle of box
        }
        printf("|\n");                                       //print right side of box
    }
    for (width = 0 ; width < arg1 ; width++)                 // box is 20 wide
    {
        printf("*");                                         // print bottom
    }
    printf("\n");                                            // carrage return at then end of the bottom
    return 0;
}
