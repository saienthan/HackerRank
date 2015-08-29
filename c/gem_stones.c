#include<stdio.h>
#include<string.h>
int main(){
    int T, i, j ,len ,ct = 0;
    char str[100];
    int final[26], temp[26];
    scanf("%d",&T);
    for(i = 0; i < 26; i++){
        final[i] = 1;
        temp[i] = 0;
    }
    for(i = 0; i < T; i++){
        scanf("%s", str);
        len = strlen(str);
        for(j = 0; j < len; j++){
            temp[str[j]-'a'] = 1;
        }
        for(j = 0; j < 26; j++){
            if(temp[j]==0)
                final[j] = 0;
            temp[j] = 0;
        }
    }
    for(j = 0; j < 26; j++){
        ct += final[j];
    }
    printf("%d\n", ct);
}
