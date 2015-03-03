#include<stdio.h>
int findheight(int num,int height,int spring)
{
    if(num==0)
        return height;
    else
    {
        if(spring)
            return findheight(num-1,2*height,0);
        else
            return findheight(num-1,height+1,1);
    }

}
int main()
{
    int numentries,i,num;
    scanf("%d",&numentries);
    for(i=0;i<numentries;i++)
    {   
        scanf("%d",&num);
        printf("%d\n",findheight(num,1,1));
    }   
}

