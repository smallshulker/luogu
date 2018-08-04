#include<cstdio>
#include<cstring>
using namespace std;
main()
{
	char a1[501]={0},b1[501]={0};
	int x,la,lb,lc=0,c[501]={0},a[501]={0},b[501]={0};
	scanf("%s",a1);
	scanf("%s",b1);
	la=strlen(a1)-1;
	lb=strlen(b1)-1;
	for(int i=0;i<=la;i++){
		a[i]=a1[la-i]-'0';
	}
	for(int i=0;i<=lb;i++){
		b[i]=b1[lb-i]-'0';
	}
	for(;((lc<=la)||(lc<=lb));lc++){
		c[lc]=a[lc]+b[lc]+c[lc];
		if(c[lc]>=10){
			c[lc+1]+=1;
			c[lc]-=10;
		}
	}
	if(c[lc]==0){
		lc--;
	}
	for(int i=lc;i>=0;i--){
		printf("%d",c[i]);
	}
	return 0;
}
