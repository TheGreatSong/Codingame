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
        //MAX �ӵ��� ���ؾ� ��.
        fprintf(stderr, "�ӵ� : %d\n",S);
        fprintf(stderr, "�����Ÿ� : %d\n",R-X-1);
        fprintf(stderr, "��ġ : %d\n",X);
        fprintf(stderr, "���� : %d\n",G);
        fprintf(stderr, "���� : %d\n",L);
        
        if((R-X-1)>0 && S-1<G){
            printf("SPEED\n");
            fprintf(stderr, "���� ���ž�\n");
        }
        else if((R-X-1)>0 && S-1>G){
            printf("SLOW\n");
            fprintf(stderr, "���� ���ž�\n");
        }
        else if((R-X-1)>0 && S-1==G){
            printf("WAIT\n");
            fprintf(stderr, "��� ���ž�\n");
        }
        else if((R-X-1)==0){
            printf("JUMP\n");
            fprintf(stderr, "���� ���ž�\n");
        }
        else if(R-X-1<0){
            printf("SLOW\n");
            fprintf(stderr, "���� ���ž�\n");
        }
            
            
        
    }
}
