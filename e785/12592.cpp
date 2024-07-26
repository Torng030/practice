#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	string s1,s2,s3,s4;
	map<string,string> mp;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		getline(cin,s1);
		getline(cin,s2);
		mp[s1]=s2;
	}
	cin>>q;
	cin.ignore();
	for(int i=0;i<q;i++)
	{
		getline(cin,s3);
		cout<<mp[s3]<<endl;
	}
}
