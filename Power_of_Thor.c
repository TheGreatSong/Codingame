#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * space_remove(char *str);

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int LX; // the X position of the light of power
    int LY; // the Y position of the light of power
    int TX; // Thor's starting X position
    int TY; // Thor's starting Y position
    scanf("%d%d%d%d", &LX, &LY, &TX, &TY); fgetc(stdin);

    // game loop
    while (1) {
        int E; // The level of Thor's remaining energy, representing the number of moves he can still make.
        scanf("%d", &E); fgetc(stdin);
        char ver[2]={0,};
        char hor[2]={0,};
        char dir[]="x";
        
        if (TX == LX)        
            hor[0] = ' ' ;		
        else {				
            if (TX < LX) {	
                hor[0] = 'E';	
                TX++;		
            }
            else {	
                hor[0] = 'W';	
                TX--;		
            }
        }
        
        if (TY == LY)		
            ver[0] = ' ';           
        else {
            if (TY < LY) {	
                ver[0] = 'S';	
                TY++;		
            }
            else {		
                ver[0] = 'N';	
                TY--;		
            }
        } 
        strcpy(dir,ver);
    	strcat(dir,hor);
    	
    	space_remove(dir);	
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        printf("%s\n",dir); // A single line providing the move to be made: N NE E SE S SW W or NW
    }
}

char * space_remove(char *str)
{
  // change BUF_SIZE depending on the length of your string
	char buf[2]={0,};
	char *p;
	p = strtok(str, "\r\n\t ");
	strcat(buf, p);
	while(p!=NULL){
		p = strtok(NULL, "\r\n\t ");
		if(p!=NULL) {
			strcat(buf, " ");
			strcat(buf, p);
		}
	}
	memset(str, '\0', 2);
	strcpy(str, buf);
	return str;
}
