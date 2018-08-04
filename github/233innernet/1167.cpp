#include<cstdio>
#include<cstring>
bool map[25][25];
unsigned long long dt[25][25];;
void makemap(int x,int y){
    memset(map,0,sizeof(map));
    map[x][y]=1;
    if(x>0)
    map[x-1][y+2]=1;
    map[x+1][y+2]=1;
    if(x>0&&y>1)
    map[x-1][y-2]=1;
    if(y>1)
    map[x+1][y-2]=1;
    if(x>1)
    map[x-2][y+1]=1;
    map[x+2][y+1]=1;
    if(x>1&&y>0)
    map[x-2][y-1]=1;
    if(y>0)
    map[x+2][y-1]=1;
}
int main()
{
    int x,y,_x,_y;
    scanf("%d %d %d %d",&x,&y,&_x,&_y);
    makemap(_x,_y);
    memset(dt,0,sizeof(dt));
    dt[1][0]=1;
    for(int i=1;i<=x+1;++i){
        for(int j=1;j<=y+1;++j){
            dt[i][j]=dt[i-1][j]+dt[i][j-1];
            if(map[i-1][j-1]) dt[i][j]=0;
        }
    }
    printf("%lld",dt[x+1][y+1]);
    return 0;
}
