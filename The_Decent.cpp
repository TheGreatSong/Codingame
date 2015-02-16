#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    while (1) {
        int SX, SY, current_height, max_height, max_position = 0;
        cin >> SX >> SY >> max_height;
        for (int i = 1; i < 8; i++) {
            cin >> current_height;
            if (max_height < current_height) {
                max_height = current_height;
                max_position = i;
            }
        }
        if (SX == max_position)
            cout << "FIRE" << endl;
        else
            cout << "HOLD" << endl;
    }
}

/******Oringinal Code**************************************
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **
int main()
{
    int LX; // the X position of the light of power
    int LY; // the Y position of the light of power
    int TX; // Thor's starting X position
    int TY; // Thor's starting Y position
    scanf("%d%d%d%d", &LX, &LY, &TX, &TY);

    // game loop
    while (1) {
        int E; // The level of Thor's remaining energy, representing the number of moves he can still make.
        scanf("%d", &E);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        printf("SE\n"); // A single line providing the move to be made: N NE E SE S SW W or NW
    }
}
*******************************************************************/
