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
        fprintf(stderr, "속도 : %d\n",S);
        fprintf(stderr, "남은거리 : %d\n",R-X-1);
        fprintf(stderr, "위치 : %d\n",X);
        fprintf(stderr, "간격 : %d\n",G);
        fprintf(stderr, "착륙 : %d\n",L);
        
        if((R-X-1)>0 && S-1<G){
            printf("SPEED\n");
            fprintf(stderr, "가속 병신아\n");
        }
        else if((R-X-1)>0 && S-1>G){
            printf("SLOW\n");
            fprintf(stderr, "감속 병신아\n");
        }
        else if((R-X-1)>0 && S-1==G){
            printf("WAIT\n");
            fprintf(stderr, "등속 병신아\n");
        }
        else if((R-X-1)==0){
            printf("JUMP\n");
            fprintf(stderr, "점프 병신아\n");
        }
        else if(R-X-1<0){
            printf("SLOW\n");
            fprintf(stderr, "감속 병신아\n");
        }
            
            
        
    }
}
