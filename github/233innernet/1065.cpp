#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;
const int maxn=1005;
int a[maxn];
int f[maxn];
int main()
{
   int n=0;
   int l,r,mid;
   while(scanf("%d",&a[++n])!=EOF)continue;
   n--;
   f[0]=1234123412;//这个数要大于50000，不然可能你就无法更新
   int ans1=0;
   for(int i=1;i<=n;i++){
          if(f[ans1]>=a[i]){
                f[ans1+1]=a[i];//结束点为a[i]
                ans1++; //当前最长不上升序列的长度加一
       }
       else {//二分查找
              l=0;r=ans1;
              while(l<r){
                     mid=(l+r)/2;
                    if(f[mid]>=a[i])l=mid+1;
                    else {
                        r=mid;    
              }
           }
           if(l!=0)f[l]=a[i];
       }
   }
//   cout<<ans1<<endl;//输出第一问的答案
     memset(f,-1,sizeof(f));//这次前面要尽量小了，不然又无法更新
   int ans2=0;
   for(int i=1;i<=n;i++){
          if(f[ans2]<a[i]){
                f[ans2+1]=a[i];//结束点为a[i]
                ans2++; //当前最长上升序列长度加一
       }
       else {//二分查找
              l=0;r=ans2;
              while(l<r){
                     mid=(l+r)/2;
                    if(f[mid]>=a[i])r=mid;
                    else {
                        l=mid+1;    
              }
           }
          f[l]=a[i];
       }
   }
   cout<<ans2<<endl;//输出第二个答案
}
