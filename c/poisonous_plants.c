#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i, count=0, maxcount=0, j;
    scanf("%d", &n);
    int *p = (int *)malloc(sizeof(int)*n);
    for(i = 0; i < n; i++)
        scanf("%d", &p[i]);
    /*
    for(i = 0; i < n; i++)
        printf("%d ", p[i]);
    printf("\n");
    */
    for(i = 1; i < n; i++){
        if(p[i] > p[i-1]){
            count = 1;
            j = i+1;
            while((p[j]>p[i-1]) && (j<n)){
                if(p[j]>p[(j++)-1])
                    continue;
                count++;
            }
            if(count > maxcount)
                maxcount = count;
        }
    }
    printf("%d\n", maxcount);
}
