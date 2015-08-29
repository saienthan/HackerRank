#include <stdio.h>
int main(){
    int num_tests;
    int n, i, n1;
    int front, back;
    scanf("%d", &num_tests);
    for(i = 0; i < num_tests; i++){
        scanf("%d", &n);
        n1 = n+1;
        front = ((n-1)/2) + 1;
        printf("%d ",front);
        if(n1-front != front)
            printf("%d ", n1-front);
        while(--front >0){
            printf("%d ",front);
            printf("%d ", n1-front);
        }
        printf("\n");
    }
}
