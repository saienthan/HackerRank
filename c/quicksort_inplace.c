#include <stdio.h>
#include <stdlib.h>
int partition(int l, int r, int *a);
int len;
int insert, swap;
void qs(int l,int r,int *a){
    int p;
    if(l<r){
        p = partition(l,r,a);
        qs(l,p-1,a);
        qs(p+1,r,a);
    }
}
int partition(int l, int r, int *a){
    int pivot = a[r];
    int i, temp, j, k;
    i = l-1;
    for(j=l; j<r; j++){
        if(a[j] <= pivot){
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i+1];
    a[i+1] = a[r];
    a[r] = temp;
    return i+1;
}
int main(){
    scanf("%d",&len);
    int *a = (int *) malloc(sizeof(int) * len);
    int i,k;
    for(i = 0; i < len; i++){
        scanf("%d",&a[i]);
    }
    qs(0,len-1,a);
    for(k = 0; k < len; k++){
        printf("%d ",a[k]);
    }
    printf("\n");
}
