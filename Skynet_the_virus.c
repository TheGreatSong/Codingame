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
    int key;//게이트웨이 1번과 연결되는 첫번째 노드 번호
    int matrix[38][38];
    int gate[3];
    
    scanf("%d%d%d", &N, &L, &E);
    fprintf(stderr, "N : %d, L : %d, E : %d\n",N,L,E);
    for (int i = 0; i < L; i++) {
        int N1; // N1 and N2 defines a link between these nodes
        int N2;
        scanf("%d%d", &N1, &N2);
        matrix[N1][N2]=1;
        matrix[N2][N1]=1;//행렬에다가 node 간의 연결을 입력 1 = 연결, 0 = 단절
    }
    
//    fprintf(stderr, "행렬 테스트 : %d\n",matrix[29][30]);
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
        int SI; //스카이넷이 있는 노드는 매턴마다 인식됨.

        
        scanf("%d", &SI);
        fprintf(stderr, "Skynet이 있는 node : %d\n",SI);
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        fprintf(stderr,"gate0 : %d gate1 : %d gate2 : %d\n ",gate[0],gate[1],gate[2]);
        //스카이넷이 있는 노드가 나랑 연결된 노드인지 판단을 해야함.
        //해당 턴에 node 하나 무조건 끊어야 됨.
       
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
       
        
    
        
        //순서는 의미 없음.
    }
}

/****************Original Code***************************************
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **
int main()
{
    int N; // the total number of nodes in the level, including the gateways
    int L; // the number of links
    int E; // the number of exit gateways
    scanf("%d%d%d", &N, &L, &E);
    for (int i = 0; i < L; i++) {
        int N1; // N1 and N2 defines a link between these nodes
        int N2;
        scanf("%d%d", &N1, &N2);
    }
    for (int i = 0; i < E; i++) {
        int EI; // the index of a gateway node
        scanf("%d", &EI);
    }

    // game loop
    while (1) {
        int SI; // The index of the node on which the Skynet agent is positioned this turn
        scanf("%d", &SI);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        printf("0 1\n"); // Example: 0 1 are the indices of the nodes you wish to sever the link between
    }
}
***********************************************************************/