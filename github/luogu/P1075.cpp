#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for (int i=2;i<a;i++){
		if (a%i==0){
			cout<<a/i;
			break;
		}
	}
	return 0;
}
