#include<stdio.h>
int main(){
    int T, N, K;
    int i, j, temp, count;
    scanf("%d",&T);
    for(i = 0; i < T; i++){
        count = 0;
        scanf("%d", &N);
        scanf("%d", &K);
        for(j = 0; j < N; j++){
            scanf("%d",&temp);
            if(temp <= 0)
                count++;
        }
        if(count < K)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
