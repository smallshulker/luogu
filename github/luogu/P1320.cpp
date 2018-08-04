#include<cstdio>
#include<cstring>
using namespace std;
main()
{
	char a[205];
	gets(a);
	int n=strlen(a),sum=0,b,jc='0';
	printf("%d\n",n);
	for(int i=1;i<=n-1;i++){
		if(a[i]==jc)sum++;
		else {
			printf("%d ",sum);
			sum=2;
			jc=a[i];
		}
	}
	jc-='0';
	for(int i=1;i<=n*n-n;i++){
		scanf("%1d",&b);
		if(b==jc)sum++;
		else{
			printf("%d ",sum);
			sum=1;
			jc=b;
		}
	}
	printf("%d",sum);
	return 0;
}
