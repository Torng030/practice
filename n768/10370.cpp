#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,score;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n]={};
		double sum=0,avg=0;
		for(int i=0;i<n;i++)
		{
			cin>>score;
			a[i]=score;
			sum+=a[i];
		}
		double count=0;
		avg=sum/n;
		for(int i=0;i<n;i++)
		{
			if(a[i]>avg)
				count++;
		}
		double rate=count/n*100;
		cout<<fixed<<setprecision(3)<<rate<<"%"<<endl;
	}
}
