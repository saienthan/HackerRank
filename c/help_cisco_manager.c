#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int NumberOfBitsSet(int number)
{
    int BitsSet = 0;
    while(number != 0)
    {
        if(number & 0x01)
        {
            BitsSet++;
        }
        number = number >> 1;
    }
    return BitsSet;
}
void PrintNumberInBinary(int number, int NumBits, float *pcount, float *arr)
{
    int val;
    int temp = 0;
    float prob;
    val = 1 << NumBits; 
    prob=1;
    while(val != 0)
    {
        if(number & val)
        {
            //printf("%f\n", arr[temp]);
            prob *= arr[temp];
            //printf("1");
        }
        else
        {
            //printf("%f\n", 1-arr[temp]);
            prob *= (1-arr[temp]);
            //printf("0");
        }
        val = val >> 1;
        temp += 1;
    }
    *pcount += prob;
}
int cmpfunc(const void *a, const void *b){
    if ( *(float*)a - *(float*)b > 0)
        return 1;
    else if ( *(float*)a - *(float*)b < 0)
        return -1;
    else
        return 0;
}
int main()
{
    int n,k,i,dummy;
    int t;
    int max,min;
    float pcount;
    float *arr;
    int done = 0;
    scanf("%d", &t);
    for(dummy = 0; dummy<t; dummy++){
        scanf("%d %d", &n, &k);
        arr = (float *) malloc(sizeof(float) * n);
        for(i=0; i<n; i++){
            scanf("%f", &arr[i]);
        }
        qsort(arr, n, sizeof(float), cmpfunc);
        /*
        for(i=0; i<n; i++){
            printf("%f\n", arr[i]);
        }
        printf("\n");
        continue;
        */
        done = 0;
        pcount = 0;
        min = ((1 << k) - 1); //min possible values with k bits set
        max = (min << (n-k)); //max possible value with k bits set!
        //printf("%d %d", min, max);
        for(i=0; i<= max; i++)
        {
            if(!(i<min))
            {
                if(NumberOfBitsSet(i) == k)
                {
                    PrintNumberInBinary(i, (n-1), &pcount, arr);
                    break;
                }

            }
        }
        if(!done)
            printf("Case %d: %.2f\n", dummy+1, roundf(pcount * 100)/100);
        free(arr);
    }
}
