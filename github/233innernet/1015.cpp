#include<cstdio>
#include<cstring>
using namespace std;
int a[7];
int pd[1005];
int ans = 0,cnt;
int main() {
    for(int i=1; i<=6; i++)
        scanf("%d",&a[i]);
    for(int i1 = 0 ; i1 <= a[1] ; i1++) {
        for(int i2 = 0 ; i2 <= a[2] ; i2++) {
            for(int i3 = 0 ; i3 <= a[3] ; i3++) {
                for(int i4 = 0 ; i4 <= a[4] ; i4++) {
                    for(int i5 = 0 ; i5 <= a[5] ; i5++) {
                        for(int i6 = 0 ; i6 <= a[6] ; i6++) {
                            pd[i1 + i2 * 2 + i3 * 3 + i4 * 5 + i5 * 10 + i6 * 20] = 1;
                        }
                    }
                }
            }
        }
    }
    for(int i=1; i<=1000; i++) {
        if(pd[i])ans++;
    }
    printf("Total=%d",ans);
    return 0;
}
