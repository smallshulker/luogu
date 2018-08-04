#include<cstdio>
#include<cstdlib>
#include<cstring>
int cmp(const void * a,const void *b) {
	char ab[105],ba[105];
	strcpy(ab,(char *)a);
	strcat(ab,(char *)b);
	strcpy(ba,(char *)b);
	strcat(ba,(char *)a);
	return strcmp(ba,ab);
}
int main() {
	int n,i,temp;
	char a[23][50];
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%s",a[i]);
	qsort(a,n,sizeof(a[0]),cmp);
	for(i=0; i<n; i++)
		printf("%s",a[i]);
	return 0;
}
