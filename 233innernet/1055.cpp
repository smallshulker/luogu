#include<cstdio>
int sum=1;
int n;
bool flag=0;
int a[100];
bool pd[100]= {0};
void print() {
    for(int i=1; i<=n; i++) {
        printf("    %d",a[i]);
    }
    printf("\n");
    flag=1;
}

void dfs() {
    if(sum==n+1) {
        print();
        return;
    }
    int j;
    for(int i=1; i<=n; i++) {
        if(pd[i])continue;
        j=1;
        for(; j<sum; j++) {
            if((a[j]-j)==(i-sum)) {
                break;
            }
            if((a[j]+j)==(i+sum)) {
                break;
            }
        }
        if(j!=sum)continue;
        pd[i]=1;
        a[sum]=i;
        sum++;
        dfs();
        a[sum]=0;
        pd[i]=0;
        sum--;
    }
}
int main() {
    scanf("%d",&n);
    dfs();
    if(flag==0){
    	printf("no solute!");
    }
    return 0;
}
