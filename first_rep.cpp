#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],h[10000]={0},f=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		h[a[i]]++;
		if(h[a[i]]>1 && f==0)
		{
			cout<<a[i];
			f=1;
		}
	}
	
	return 0;
}
