#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],h[10000]={0},max=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		h[a[i]]++;
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(int i=0;i<=max;i++)
	{
		if(h[i]==1)
			cout<<i<<" ";
	}
	return 0;
}
