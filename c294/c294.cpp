#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	vector<int> v;  //��vector�s���T�����T���� 
	cin>>a>>b>>c;
	v.push_back(a);  //push_back:�s�Jvector 
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	if(v[0]+v[1]<=v[2]){
		cout<<"No"<<endl;
	}
	else{
		if((v[0]*v[0]+v[1]*v[1])<v[2]*v[2]){
			cout<<"Obtuse"<<endl;
		}
		else if((v[0]*v[0]+v[1]*v[1])==v[2]*v[2]){
			cout<<"Right"<<endl;
		}
		else if((v[0]*v[0]+v[1]*v[1])>v[2]*v[2]){
			cout<<"Acute"<<endl;
		} 
	}
}
