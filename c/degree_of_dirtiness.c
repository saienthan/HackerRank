#include <stdio.h>
int main(){
    int num_tests;
    int i, n, m, dirty, inter, next, placed;
    scanf("%d", &num_tests);
    for(i = 0; i < num_tests; i++){
        scanf("%d", &n);
        scanf("%d", &m);
        dirty = m/n;
        placed = (m/n)*n;
        next = placed+1;
        inter = m - placed;
        if(placed == m){
            if(n%2)
                printf("%d %d", ((n-1)/2)+1, dirty-1);
            else
                printf("%d %d", ((n-1)/2)+2, dirty-1);
        }
        else if((next%2) && (inter%2))
            printf("%d %d", ((inter-1)/2)+1, dirty);
        else if((next%2) && !(inter%2))
            printf("%d %d", (n)-((inter-1)/2), dirty);
        else if(!(next%2) && !(inter%2))
            printf("%d %d", ((inter-1)/2)+1, dirty);
        else if(!(next%2) && (inter%2))
            printf("%d %d", (n)-((inter-1)/2), dirty);
        printf("\n");
    }
}
