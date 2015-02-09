#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * The code below will read all the game information for you.
 * On each game turn, information will be available on the standard input, you will be sent:
 * -> the total number of visible enemies
 * -> for each enemy, its name and distance from you
 * The system will wait for you to write an enemy name on the standard output.
 * Once you have designated a target:
 * -> the cannon will shoot
 * -> the enemies will move
 * -> new info will be available for you to read on the standard input.
 **/
int main()
{

    // game loop
    while (1) {
        int count; // The number of current enemy ships within range
        int min_dist = 1000;
        char closest_enemy[50]={0,};
        scanf("%d", &count); fgetc(stdin);//the total number of visible enemies
        
        for (int i = 0; i < count; i++) {
            char enemy[50]; // The name of this enemy, 복수가 아님.
            int dist; // The distance to your cannon of this enemy
            scanf("%s%d", enemy, &dist); fgetc(stdin);
            if(dist < min_dist)
            {
                min_dist = dist;
                strcpy(closest_enemy,enemy);
            }
      
        }
        printf("%s\n",closest_enemy);//배열로 적의 이름을 인식해서 공격할 수 있음.
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

    //    printf("HotDroid\n"); // The name of the most threatening enemy (HotDroid is just one example)
    }
}
