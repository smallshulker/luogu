#include<cstdio>
using namespace std;
int main()
{
	int sum=0;
	char map[3][3];
	for(int i=0;i<=2;i++){
		scanf("%s",map[i]);
		for(int j=0;j<=2;j++){
			if(map[i][j]!='-')sum++;
		}
	}
	if(map[2][1]=='X'||map[1][0]=='X'||map[1][2]=='X'||map[0][1]=='X'){
		printf("xiaoa will win.\n");
	}
	else{
		printf("Dont know.\n");
	}
	printf("%d",sum);
	return 0;
}
