#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{

    // game loop
    while (1) {
        char enemy1[256];
        scanf("%s", enemy1);
        int dist1;
        scanf("%d", &dist1);
        char enemy2[256];
        scanf("%s", enemy2);
        int dist2;
        scanf("%d", &dist2);
            
            if(dist1<dist2)
                printf("%s\n",enemy1);
            else
                printf("%s\n",enemy2);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        
    }
}

/***************************************************************************************
Original Code.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **//*
int main()
{

    // game loop
    while (1) {
        char enemy1[256];
        scanf("%s", enemy1);
        int dist1;
        scanf("%d", &dist1);
        char enemy2[256];
        scanf("%s", enemy2);
        int dist2;
        scanf("%d", &dist2);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        printf("HotDroid\n");
    }
}


****************************************************************************************/
