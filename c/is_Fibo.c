#include<stdio.h>
void isfibo(long int num)
{
    long int a=0, b=1, temp;
    while(a<num)
    {
        temp=b;
        b=a+b;
        a=temp;
    }
    if(a==num)
        printf("IsFibo\n");
    else
        printf("IsNotFibo\n");
}
int main()
{
    int numentries,i;
    long int num;
    scanf("%d",&numentries);
    for(i=0;i<numentries;i++)
    {
        scanf("%ld",&num);
        isfibo(num);
    }
}
