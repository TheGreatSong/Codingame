#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int N; // the number of points used to draw the surface of Mars.
    int land_x;
    int land_y;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int LAND_X; // X coordinate of a surface point. (0 to 6999)
        int LAND_Y; // Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
        scanf("%d%d", &LAND_X, &LAND_Y);

        
    }//����� ��ǥ�Դϴ�. 

    // game loop
    while (1) {
        int X;
        int Y;
        int HS; //����ӵ�. ���� ���� ������ m/s
        int VS; // ���� �ӵ�, can be negative.
        int F; // ������ ��.
        int R; // ���ּ��� ������ ������. �̰ɷ� x�� ������ ���� (-90 to 90).
        int P; // ���� �л� �ӵ�.  (0 to 4).
        scanf("%d%d%d%d%d%d%d", &X, &Y, &HS, &VS, &F, &R, &P);
        //printf("%d %d\n",R,P); // ������ ������ R�� P�θ� ��.
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        
        R=0; 
        fprintf(stderr, "%d\n",Y);
        if(VS>=0){
            P=0;
            printf("%d %d\n",R,P);
        }
        else if(VS>-30 && VS <0){
            printf("%d %d\n",R,P);
        }
        else if(VS<=-30){
            P=4;
            printf("%d %d\n",R,P);
        }

    }
}