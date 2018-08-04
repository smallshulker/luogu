#include<cstdio>
#include<cstring>
using namespace std;
main()
{
	int a,n,i;
	char c[62];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s",c);
		a=c[strlen(c)-1]-'0';
		if(a%2==0){
			printf("even\n");
		}
		else{
			printf("odd\n");
		}
	}
	return 0;
}
