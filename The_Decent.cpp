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
