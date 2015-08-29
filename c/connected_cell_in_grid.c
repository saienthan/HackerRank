#include <stdio.h>
int dfs(int mat[10][10], int i, int j, int reach[10][10]){
    if((i == 10) | ( j == 10))
        return 0;
    if((i == -1) | ( j == -1))
        return 0;
    if(reach[i][j])
        return 0;
    reach[i][j] = 1;
    if(mat[i][j] == 1)
        return 1 + dfs(mat, i-1, j-1, reach) + dfs(mat, i+1, j, reach) + dfs(mat, i, j-1, reach) + dfs(mat, i-1, j, reach) + dfs(mat, i, j+1, reach) + dfs(mat, i+1, j+1, reach) + dfs(mat, i+1, j-1, reach) + dfs(mat, i-1, j+1, reach);
    return 0;
}
int main(){
    int m, n, i, j, count, max = 0, temp;
    int mat[10][10] = {0};
    int reach[10][10] = {0};
    scanf("%d",&m);
    scanf("%d",&n);
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            temp = dfs(mat, i, j, reach);
            if(temp > max)
                max = temp;
        }
    }
    printf("%d\n", max);
}
