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
   f[0]=1234123412;//�����Ҫ����50000����Ȼ��������޷�����
   int ans1=0;
   for(int i=1;i<=n;i++){
          if(f[ans1]>=a[i]){
                f[ans1+1]=a[i];//������Ϊa[i]
                ans1++; //��ǰ����������еĳ��ȼ�һ
       }
       else {//���ֲ���
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
//   cout<<ans1<<endl;//�����һ�ʵĴ�
     memset(f,-1,sizeof(f));//���ǰ��Ҫ����С�ˣ���Ȼ���޷�����
   int ans2=0;
   for(int i=1;i<=n;i++){
          if(f[ans2]<a[i]){
                f[ans2+1]=a[i];//������Ϊa[i]
                ans2++; //��ǰ��������г��ȼ�һ
       }
       else {//���ֲ���
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
   cout<<ans2<<endl;//����ڶ�����
}
