#include <stdio.h>
#include <stdlib.h>
int partition(int l, int r, int *a);
int len;
int qscount, iscount;
int insert(int *a){
    int i, j, key;
    i = 1;
    while(i<len){
        j = i-1;
        key = a[i];
        while((j>=0) && (a[j]>=key)){
            a[j+1] = a[j];
            j--;
            iscount++;
        }
        a[j+1] = key;
        i++;
    }
    return 0;
}
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
            qscount++;
        }
    }
    temp = a[i+1];
    a[i+1] = a[r];
    a[r] = temp;
    qscount++;
    return i+1;
}
int main(){
    scanf("%d",&len);
    int *a = (int *) malloc(sizeof(int) * len);
    int *b = (int *) malloc(sizeof(int) * len);
    int i,k,temp;
    qscount = 0;
    iscount = 0;
    for(i = 0; i < len; i++){
        scanf("%d",&temp);
        a[i] = temp;
        b[i] = temp;
    }
    qs(0,len-1,a);
    insert(b);
    printf("%d\n",iscount-qscount);
}
