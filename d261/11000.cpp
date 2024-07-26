#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long m[100],w[100];
	m[0]=0;
	w[0]=1;
	for(int i=1;i<100;i++)
	{
		m[i]=w[i-1]+m[i-1];
		w[i]=1+m[i-1];
	}
	while(cin>>n&&n!=-1)
	{
		cout<<m[n]<<" "<<m[n]+w[n]<<endl;
	}
}
