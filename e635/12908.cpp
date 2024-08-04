#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	for(int i=0;i<20000;i++)
	{
		v.push_back((i*(i+1))/2);
	}
	while(cin>>n&&n!=0)
	{
		vector<int>::iterator it=upper_bound(v.begin(),v.end(),n);
		cout<<*it-n<<" "<<it-v.begin()<<endl;
	}
}
