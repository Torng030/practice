#include <bits/stdc++.h>
using namespace std;
int main()
{
	int index=1;
	long long v1,d1,v2,d2;
	long long t1,t2;
	while(cin>>v1>>d1>>v2>>d2&&v1!=0&&d1!=0&&v2!=0&&d2!=0)
	{
		cout<<"Case #"<<index<<": ";
		t1=d1*v2;
		t2=d2*v1;
		if(t1<=t2)
			cout<<"You owe me a beer!"<<endl;
		else
			cout<<"No beer for the captain."<<endl;
		index++;
		long long time=0;
		cout<<"Avg. arrival time: ";
		time=(d1*v2+d2*v1);
		int gg=__gcd(time,v1*v2*2);
		if(gg==v1*v2*2)
			cout<<time/gg<<endl;
		else
			cout<<time/gg<<"/"<<v1*v2*2/gg<<endl;
	}
}
