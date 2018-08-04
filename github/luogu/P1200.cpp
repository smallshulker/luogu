#include<cstdio>
#include<cstring>
using namespace std;
main()
{
	int mathcom[7]={0},mathgro[7]={0},grosum=1,comsum=1;
	char comet[7]={0},group[7]={0};
	scanf("%s",comet);
	scanf("%s",group);
	for(int i=0;i<=strlen(comet)-1;i++){
		comet[i]=comet[i]-64;
		mathcom[i]=comet[i];
		comsum*=mathcom[i];
	}
	for(int i=0;i<=strlen(group)-1;i++){
		mathgro[i]=group[i]-64;
		grosum*=mathgro[i];
	}
	if((comsum%47)==(grosum%47)){
		printf("GO");
	}
	else{
		printf("STAY");
	}
	return 0;
}
