#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, Case=1;
    while (cin >> s&&s!=0)
    {
        cout<<"Case "<<Case<<": ";
        Case++;
        if(s==1)
        {
        	cout<<"1"<<endl;
        	continue;
        }
        int ans=-1;
        for(int i=s-1;i>=1;i--)
        {
            int sum=0;
            for(int j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    sum += j;
                    if (j*j!=i) 
                    	sum+=i/j;
                }
            }
            if (sum==s){
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
