#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int L;
    scanf("%d", &L); fgetc(stdin);
    
    int H;
    scanf("%d", &H); fgetc(stdin);
    
    char T[256];
    int cntT[256];//�־��� ���ڿ��� ���° �����ΰ��� �����ϴ� �迭.
    int cntlength=0;
    
    char copy[11][1024];//�뷮�� ���� ����. 11 by 1024 �����. 11�� �ƽ�Ű ���������� ����
    
    fgets(T,256,stdin);//���⼭ �־��� ���ڿ��� ����. ex) E
    
    for (int i = 0; i < H; i++) {//1�� �� ���� ���ڿ��� ����. ���ڿ��� �ϳ��� ��������.
        char ROW[1024];
        fgets(ROW,1024,stdin);
        strcpy(copy[i],ROW);
        
    }
    if(H==5){
          for(int cycnth=0;cycnth<H;cycnth++){
                for(int i = 0;i<strlen(T)-1;i++){
                    int ascii = 4*(T[i]-64)-4;
                    
                    if(ascii > -1 && ascii < 101){
                        for(int n = ascii;n<ascii+4;n++){
                            printf("%c",copy[cycnth][n]);
                        }
                        
                    }
                    else if(ascii > 127 && ascii < 229){
                       for(int n = ascii-128;n<ascii-124;n++){
                            printf("%c",copy[cycnth][n]);
                        }
                       
                    }
                    else{
                        for(int n = 104 ;n<108;n++){
                            printf("%c",copy[cycnth][n]);
                        }
                    }
                }
                printf("\n");
          }
    }
    else if(H==11){
        fprintf(stderr, "��\n\n");
        for(int cycnth=0;cycnth<H;cycnth++){
                for(int i = 0;i<strlen(T)-1;i++){
                    int ascii = 20*(T[i]-64)-20;
                    
                    if(ascii > -1 && ascii < 1021){
                        for(int n = ascii;n<ascii+20;n++){
                            printf("%c",copy[cycnth][n]);
                        }
                        
                    }
                    
                }
                printf("\n");
          }
    }
    
    
    
    
}