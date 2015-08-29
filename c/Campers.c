#include<stdio.h>
#define MAX 2000000
int main(){
    int n, k;
    int i = 0;
    int temp, count=0;
    int players[MAX];
    scanf("%d",&n);
    scanf("%d",&k);
    for(; i < k ; i++){
        scanf("%d",&temp);
        players[temp] = 1;
    }
    if(players[2]==0)
        players[1] = 1;
    for(i = 1; i < MAX-1; i++){
        if((players[i-1]==0) && (players[i+1]==0))
            players[i] = 1;
    }
    if(players[MAX-2]==0)
        players[MAX-1] = 1;
    for(i = 0; i <= n; i++){
        count += players[i];
    }
    printf("%d\n", count);
}
