#include<bits/stdc++.h>
using namespace std;
int main(){
	string x; 
	int odd=0,even=0; //�_�ư��� 
	cin>>x;
	for(int i=0;i<x.length();i++){ 
		if(i%2==0) 
			even+=x[i]-'0'; //��X�r�갸�ƪ������ìۥ[ 
		else
			odd+=x[i]-'0';  //�D���h�_
	}
	cout<<abs(odd-even)<<endl;
}
