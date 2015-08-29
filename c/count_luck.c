#include <stdio.h>
int done;
int start[2];
int stop[2];
int N, M;
void dfs(char mat[100][100], char reach[100][100], int row, int col, int count){
    int i, j, temp=0;
    if(row>=N || col >=M)
        return;
    if(row<0 || col <0)
        return;
    if(!done){
        if(reach[row][col]==0){
            if(stop[0] == row && stop[1] == col){
                done = count;
                return;
            }
            reach[row][col]=1;
            if(mat[row-1][col]==1&&!reach[row-1][col])
                temp++;
            if(mat[row+1][col]==1&&!reach[row+1][col])
                temp++;
            if(mat[row][col+1]==1&&!reach[row][col+1])
                temp++;
            if(mat[row][col-1]==1&&!reach[row][col-1])
                temp++;
            if(temp>1)
                count++;
            if(mat[row-1][col]==1&&!reach[row-1][col])
                dfs(mat,reach,row-1,col,count);
            if(mat[row+1][col]==1&&!reach[row+1][col])
                dfs(mat,reach,row+1,col,count);
            if(mat[row][col+1]==1&&!reach[row][col+1])
                dfs(mat,reach,row,col+1,count);
            if(mat[row][col-1]==1&&!reach[row][col-1])
                dfs(mat,reach,row,col-1,count);
        }
    }
}
int main(){
    int T, K, t, i, j;
    char mat[100][100] = {0};
    char reach[100][100] = {0};
    char temp;
    scanf("%d",&T);
    for(t = 0; t < T; t++){
        done = 0;
        for(i = 0; i < 100; i++){
            for(j = 0; j < 100; j++){
                reach[i][j] = 0;
                mat[i][j] = 0;
            }
        }
        scanf("%d",&N);
        scanf("%d",&M);
        for(i = 0; i < N; i++)
            scanf("%s",mat[i]);
        scanf("%d", &K);
        for(i = 0; i < N; i++){
            for(j = 0; j < M; j++){
                if(mat[i][j] == 'M'){
                    start[0] = i;
                    start[1] = j;
                    mat[i][j] = 1;
                }
                else if(mat[i][j] == '*'){
                    stop[0] = i;
                    stop[1] = j;
                    mat[i][j] = 1;
                }
                else if(mat[i][j] == '.')
                    mat[i][j] = 1;
                else
                    mat[i][j] = 0;
            }
        }
        dfs(mat,reach,start[0],start[1],0);
        if(done==K)
            printf("Impressed\n");
        else{
            printf("Oops!\n");
        }
    }
}
