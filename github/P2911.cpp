#include<cstdio>
using namespace std;
int main()
{
	int out[81]={0};
	int a1,a2,a3;
	scanf("%d %d %d",&a1,&a2,&a3);
	for(int i=1;i<=a1;i++){
		for(int j=1;j<=a2;j++){
			for(int k=1;k<=a3;k++){
				out[i+j+k]++;
			}
		}
	}
	int outmax[2]={0,0};
	for(int i=1;i<=80;i++){
		if(out[i]>outmax[1]){
			outmax[2]=i;
			outmax[1]=out[i];
		}
	}
	printf("%d",outmax[2]);
	return 0;
}
