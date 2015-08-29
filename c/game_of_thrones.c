#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int T, i, len, num;
    int found_odd = 0;
    char str[100000];
    char hash[26];
    for(i = 0; i < 26; i++)
        hash[i] = 0;
    scanf("%d",&T);
    scanf("%s",str);
    len = strlen(str);
    for(i = 0; i < len; i++){
        hash[str[i]-'a']++;
    }
    for(i = 0; i < 26; i++){
        if(hash[i]%2==1 && found_odd==0)
            found_odd = 1;
        else if(hash[i]%2==1 && found_odd==1){
            found_odd = 2;
            break;
        }
        //printf("%c - %d\n",i+'a',hash[i]);
    }
    if((found_odd == 0) && (len%2==0))
        printf("YES\n");
    else if((found_odd == 1) && (len%2==1))
        printf("YES\n");
    else
        printf("NO\n");
}
