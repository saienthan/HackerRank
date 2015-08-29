#include <stdio.h>
#include <stdlib.h>
int partition(int l, int r, int *a, int *done){
    int i = l;
    int k;
    int j = r+1, temp;
    int pivot = a[i];
    while(i<j){
        do i++;
        while(pivot > a[i]);
        do j--;
        while(pivot < a[j]);
        if(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[j];
    a[j] = a[l];
    a[l] = temp;
    return j;
}
int main(){
    int i = 0, len, done=0;
    int k, l, r, temp;
    scanf("%d", &len);
    int *a = (int *) malloc (sizeof(int) *len);
    for(i = 0; i < len; i++){
        scanf("%d",&a[i]);
    }
    l = 0;
    r = len-1;
    k = partition(l, r, a, &done);
    while(k!=(len/2)){
        if(k<(len/2))
            l = k+1;
        else
            r = k-1;
        k = partition(l, r, a, &done);
    }
    printf("%d\n", a[k]);
}
