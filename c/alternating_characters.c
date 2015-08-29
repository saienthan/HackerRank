#include<stdio.h>
#include<string.h>
int main(){
    int T, i, len, num, back, front, count;
    char str[100000];
    scanf("%d",&T);
    for(num = 0; num < T; num++){
        count = 0;
        scanf("%s",str);
        len = strlen(str);
        //printf("%d\n",len);
        front = 1;
        back = 0;
        while(front < len){
            if(str[front] != str[back]){
                back = front;
                front++;
            }
            else{
                count += 1;
                front++;
            }
        }
        printf("%d\n", count);
    }
}
