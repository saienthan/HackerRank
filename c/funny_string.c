#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int T, i, len, num, back, front, count;
    char str[10000];
    scanf("%d",&T);
    for(num = 0; num < T; num++){
        count = 0;
        scanf("%s",str);
        len = strlen(str);
        front = len-1;
        back = 1;
        while(back < (len+1)/2){
            if(abs(str[back] - str[back-1]) != abs(str[front] - str[front-1]))
                break;
            else{
                back++;
                front--;
            }
        }
        if(back==(len+1)/2)
            printf("Funny\n");
        else
            printf("Not Funny\n");
    }
}
