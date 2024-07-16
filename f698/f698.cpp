#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	stack<int> sta;
	while(cin>>s){
		if(s=="+"||s=="-"||s=="*"||s=="/"){
			int a=sta.top();
			sta.pop();
			int b=sta.top();
			sta.pop();
			if(s=="+"){
				sta.push(b+a);
			}
			if(s=="-"){
				sta.push(b-a);
			}
			if(s=="*"){
				sta.push(b*a);
			}
			if(s=="/"){
				sta.push(b/a);
			}
		}
		else{
			sta.push(stoi(s));
		}
	}
	cout<<sta.top()<<endl;
}
