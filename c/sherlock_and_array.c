#include <stdio.h>
int main(){
    int T, N, done;
    long int tsum;
    long int fsum;
    int a[20000];
    int i = 0, j;
    scanf("%d",&T);
    for(; i < T; i++){
        tsum = 0;
        fsum = 0;
        done = 0;
        scanf("%d", &N);
        for(j = 0; j < N; j++){
            scanf("%d",&a[j]);
            tsum += a[j];
        }
        for(j = 0; j < N; j++){
            if(fsum == (tsum-fsum-a[j])){
                done = 1;
                printf("YES\n");
                break;
            }
            fsum += a[j];
        }
        if(!done){
            printf("NO\n");
        }
    }
}
