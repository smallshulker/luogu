#include<cstdio>
#include<cstring>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	int std[8];
	for(int i=1; i<8; i++) {
		scanf("%d",&std[i]);
	}
	int a,h=7;
	int boun[7];
	memset(boun,0,sizeof(boun));
	for(int i=0; i<n; i++) {
		for(int j=1; j<8; j++) {
			scanf("%d",&a);
			for(int k=1; k<=7; k++) {
				if(a==std[k]) {
					h--;
					break;
				}
			}
		}
		if(h!=7) {
			boun[h]++;
		}
		h=7;
	}
	for(int i=0; i<7; i++) {
		printf("%d ",boun[i]);
	}
	return 0;
}
