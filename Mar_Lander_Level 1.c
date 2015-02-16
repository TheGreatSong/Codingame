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

        
    }//여기는 좌표입니다. 

    // game loop
    while (1) {
        int X;
        int Y;
        int HS; //수평속도. 음수 가능 단위는 m/s
        int VS; // 수직 속도, can be negative.
        int F; // 연료의 양.
        int R; // 우주선의 각도를 조절함. 이걸로 x축 방향을 결정 (-90 to 90).
        int P; // 로켓 분사 속도.  (0 to 4).
        scanf("%d%d%d%d%d%d%d", &X, &Y, &HS, &VS, &F, &R, &P);
        //printf("%d %d\n",R,P); // 로켓의 조정은 R과 P로만 함.
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

/************Original Code*********************************************************
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **
int main()
{
    int N; // the number of points used to draw the surface of Mars.
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int LAND_X; // X coordinate of a surface point. (0 to 6999)
        int LAND_Y; // Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
        scanf("%d%d", &LAND_X, &LAND_Y);
    }

    // game loop
    while (1) {
        int X;
        int Y;
        int HS; // the horizontal speed (in m/s), can be negative.
        int VS; // the vertical speed (in m/s), can be negative.
        int F; // the quantity of remaining fuel in liters.
        int R; // the rotation angle in degrees (-90 to 90).
        int P; // the thrust power (0 to 4).
        scanf("%d%d%d%d%d%d%d", &X, &Y, &HS, &VS, &F, &R, &P);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        printf("-20 3\n"); // R P. R is the desired rotation angle. P is the desired thrust power.
    }
}
************************************************************************************/