#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX  50
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int N; // the number of temperatures to analyse
    scanf("%d", &N); fgetc(stdin);
    
    int num;//���ڿ� ī��Ʈ ����
    int real;//���ڿ����� ���� �˾Ƴ���
    int result=0;
    int mark=1;//������ ��ȣ ����, 1�� �ʱ�ȭ
    int array[10];//���ڸ� ������ �迭
    int arraynum1=0;

    
    char TEMPS[256]; // the N temperatures expressed as integers ranging from -273 to 5526
    fgets(TEMPS,256,stdin); // the N temperatures expressed as integers ranging from -273 to 5526

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    while(TEMPS[num] != NULL){
        //�迭�� �� 0~9
        if(TEMPS[num] == 45){//��ȣ�� ������.
            mark = -1;
        }
        
    //fprintf(stderr, "%c\n",TEMPS[num]);
        if( TEMPS[num]!=45 && TEMPS[num]!=32){//���� �̾Ƴ���
            result = TEMPS[num]-48;
            
            if(TEMPS[num+1]!=45 && TEMPS[num+1]!=32 && TEMPS[num+1] != 10 && TEMPS[num+1] != 0){//���ڸ� ��
                real = mark * ((TEMPS[num]-48)*10 + (TEMPS[num+1]-48));
                fprintf(stderr, "real : %d\n",real);
                fprintf(stderr, "�ƽ�Ű : %d,%d\n",TEMPS[num],TEMPS[num+1]);
                mark =1;
                num++;
            }
            else if(TEMPS[num+1] != 0 ){
                real = mark * (TEMPS[num]-48);
                fprintf(stderr, "real : %d\n",real);
                fprintf(stderr, "�ƽ�Ű : %d\n",TEMPS[num]);
                mark=1;
            }
            array[arraynum1] = real;
            fprintf(stderr, "�迭 : %d\n �迭 ���� : %d\n",array[arraynum1],arraynum1);
            arraynum1++;
            
    //            
        }
        
        num++;
        
    }
    
    int j,k,l;
    
    j=MAX;

	for(k=0;k<10;k++){
	
		if(array[k]>=0 && array[k] != NULL){
			l=array[k]-0;
		}
		else if(array[k] != NULL){
			l=0-array[k];
		}
		
		if(l<=j){
			j=l;
			result=array[k];
		}


	}
	printf("%d\n",result);


    
}