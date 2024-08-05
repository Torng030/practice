#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,e,f,c;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>e>>f>>c;
		int count,mod,sum=0,tmp;
		count=(e+f)/c;
		mod=(e+f)%c;
		sum+=count;
		while(count!=0)
		{
			if(count==1&&mod==0)
				break;
			tmp=(count+mod)%c;
			count=(count+mod)/c;
			mod=tmp;
			sum+=count;
		}
		cout<<sum<<endl;
	}
}
