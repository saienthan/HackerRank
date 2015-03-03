#include<stdio.h>
int check(int num,int *counter)
{
    int temp = num;
    int digit;
    if(!num)
        return;
    while(temp>0)
    {
        digit = temp%10;
        temp = temp/10;
        if(!digit)
            continue;
        if(num%digit==0)
            (*counter)++;
    }
    printf("%d\n",*counter);
}


int main()
{
    int numentries;
    int counter = 0;
    scanf("%d",&numentries);
    int ct=0;
    int num;
    for(;ct<numentries;ct++)
    {
        scanf("%d",&num);
        check(num,&counter);
        counter = 0;
    }
}
