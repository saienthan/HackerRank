#include <stdio.h>
#include <string.h>
int main(){
    int T, i, lena, lenb, j, done;
    char a[1000000], b[1000000];
    int hasha[26], hashb[26];
    scanf("%d",&T);
    for(i = 0; i < T; i++){
        scanf("%s", a);
        scanf("%s", b);
        lena = strlen(a);
        lenb = strlen(b);
        for(j = 0; j < 26; j++){
            hasha[j] = 0;
            hashb[j] = 0;
        }
        for(j = 0; j < lena; j++)
            hasha[a[j]-'a'] = 1;
        for(j = 0; j < lenb; j++)
            hashb[b[j]-'a'] = 1;
        for(j = 0; j < 26; j++)
            printf("%d ",hasha[j]);
        printf("\n");
        for(j = 0; j < 26; j++)
            printf("%d ",hashb[j]);
        printf("\n");
        for(j = 0; j < 26; j++){
            if((hasha[j] == 1) && (hashb[j] == 1)){
                printf("%c\n",j+'a');
                printf("YES\n");
                break;
            }
        }
        if(j==26)
            printf("NO\n");
    }
}
