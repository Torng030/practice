#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sales,sum=0;
		vector<int> v;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>sales;
			v.push_back(sales);
			for(int j=0;j<i;j++)
			{
				if(v[i]>=v[j])
					sum++;
			}
		}
		cout<<sum<<endl;
	}
}
