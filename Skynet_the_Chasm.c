#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int R; // the length of the road before the gap.
    scanf("%d", &R); fgetc(stdin);
    int G; // the length of the gap.
    scanf("%d", &G); fgetc(stdin);
    int L; // the length of the landing platform.
    scanf("%d", &L); fgetc(stdin);

    // game loop
    while (1) {
        int S; // the motorbike's speed.
        scanf("%d", &S); fgetc(stdin);
        int X; // the position on the road of the motorbike.
        
        scanf("%d", &X); fgetc(stdin);
        
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        //MAX 속도를 정해야 됨.

        
        if((R-X-1)>0 && S-1<G){
            printf("SPEED\n");
        }
        else if((R-X-1)>0 && S-1>G){
            printf("SLOW\n");
        }
        else if((R-X-1)>0 && S-1==G){
            printf("WAIT\n");
        }
        else if((R-X-1)==0){
            printf("JUMP\n");
       }
        else if(R-X-1<0){
            printf("SLOW\n");
        }
            
            
        
    }
}
/****************Original Code***************************************************
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **
int main()
{
    int R; // the length of the road before the gap.
    scanf("%d", &R);
    int G; // the length of the gap.
    scanf("%d", &G);
    int L; // the length of the landing platform.
    scanf("%d", &L);

    // game loop
    while (1) {
        int S; // the motorbike's speed.
        scanf("%d", &S);
        int X; // the position on the road of the motorbike.
        scanf("%d", &X);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        printf("SPEED\n"); // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
    }
}
*********************************************************************************/


