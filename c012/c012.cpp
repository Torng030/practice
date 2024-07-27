#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		map<int,int> mp;
		for(int i=0;i<s.size();i++)
			mp[(s[i])]++;
		map<int,vector<int>> ans;
		for(auto &q:mp)
		{
			vector<int> v;
			v.assign(ans[q.second].begin(),ans[q.second].end());
			v.push_back(q.first);
			sort(v.begin(),v.end());
			reverse(v.begin(),v.end());
			ans[q.second].assign(v.begin(),v.end());
		}
		for(auto &a:ans)
		{
			vector<int> v1=a.second;
			for(int i=0;i<v1.size();i++)
			{
				cout<<v1[i]<<" "<<a.first<<endl;
			}
		}
		cout<<endl;
	}
}
