#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	int ans=0,test=0;
	while((cin>>a>>b)&&(a!=-1)&&(b!=-1)){
		test=abs(a-b);
		if(test>=50){
			ans=100-test;
		}
		else{
			ans=abs(a-b);
		}
		cout<<ans<<endl;
	}
} 
