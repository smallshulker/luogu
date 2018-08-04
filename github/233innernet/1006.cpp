#include<cstdio>
using namespace std;
struct person{
	char name[25];
	int prise=0;
};

int main()
{
	person a[105];
	int n,sum=0;
	scanf("%d",&n);
	int mark1,mark2,cnt;
	char moni,west;
	int max=0,maxi;
	for(int i=1;i<=n;i++){
		scanf("%s %d %d %c %c %d",a[i].name,&mark1,&mark2,&moni,&west,&cnt);
		if(mark1 > 80 && cnt>=1) a[i].prise+=8000;
		if(mark1 > 85 && mark2>80) a[i].prise+=4000;
		if(mark1 > 90) a[i].prise+=2000;
		if(mark1 > 85 && west=='Y') a[i].prise+=1000;
		if(mark2 > 80 && moni=='Y') a[i].prise+=850;
		sum+=a[i].prise;
		if(a[i].prise>max){
			max=a[i].prise;
			maxi=i;
		}
	}
	printf("%s\n%d\n%d\n",a[maxi].name,a[maxi].prise,sum);
	return 0;
}
