#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int N; // the total number of nodes in the level, including the gateways
    int L; // the number of links
    int E; // the number of exit gateways
    int key;//����Ʈ���� 1���� ����Ǵ� ù��° ��� ��ȣ
    int matrix[38][38];
    int gate[3];
    
    scanf("%d%d%d", &N, &L, &E);
    fprintf(stderr, "N : %d, L : %d, E : %d\n",N,L,E);
    for (int i = 0; i < L; i++) {
        int N1; // N1 and N2 defines a link between these nodes
        int N2;
        scanf("%d%d", &N1, &N2);
        matrix[N1][N2]=1;
        matrix[N2][N1]=1;//��Ŀ��ٰ� node ���� ������ �Է� 1 = ����, 0 = ����
    }
    
//    fprintf(stderr, "��� �׽�Ʈ : %d\n",matrix[29][30]);
    for (int i = 0; i < E; i++) {
        
        int EI; // the index of a gateway node
        scanf("%d", &EI);
        gate[i] = EI; 
        
    }
    
    for(int cnt=0;cnt<N;cnt++){
        if(matrix[gate[0]][cnt]==1){
            key = cnt;
            break;
        }
            
    }

    // game loop
    while (1) {
        int SI; //��ī�̳��� �ִ� ���� ���ϸ��� �νĵ�.

        
        scanf("%d", &SI);
        fprintf(stderr, "Skynet�� �ִ� node : %d\n",SI);
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        fprintf(stderr,"gate0 : %d gate1 : %d gate2 : %d\n ",gate[0],gate[1],gate[2]);
        //��ī�̳��� �ִ� ��尡 ���� ����� ������� �Ǵ��� �ؾ���.
        //�ش� �Ͽ� node �ϳ� ������ ����� ��.
       
        if(matrix[gate[0]][SI]==1){
            printf("%d %d\n",gate[0],SI);
        }
        else if(matrix[gate[1]][SI]==1){
            printf("%d %d\n",gate[1],SI);
        }
        else if(matrix[gate[2]][SI]==1){
            printf("%d %d\n",gate[2],SI);
        }
        else{
            printf("%d %d\n",gate[0], key);
        }
       
        
    
        
        //������ �ǹ� ����.
    }
}