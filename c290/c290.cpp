#include<bits/stdc++.h>
using namespace std;
int main(){
	string x; 
	int odd=0,even=0; //计案计 
	cin>>x;
	for(int i=0;i<x.length();i++){ 
		if(i%2==0) 
			even+=x[i]-'0'; //ъ﹃案计场だ 
		else
			odd+=x[i]-'0';  //獶案玥
	}
	cout<<abs(odd-even)<<endl;
}
