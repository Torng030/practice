#include<bits/stdc++.h>
using namespace std;
int main(){
	string x; 
	int odd=0,even=0; //奇數偶數 
	cin>>x;
	for(int i=0;i<x.length();i++){ 
		if(i%2==0) 
			even+=x[i]-'0'; //抓出字串偶數的部分並相加 
		else
			odd+=x[i]-'0';  //非偶則奇
	}
	cout<<abs(odd-even)<<endl;
}


