#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];  //�C�ӯf�H�Ӫ��ɶ� 
	}
	
	int time=0,index=0;  //time=���j�ɶ�
	while(index<n){
		if(time>v[index]){  // ��index�ӯf�H�Ӫ��ɶ� 
			time=time+5;
		}
		else{
			if(v[index]>time+30){
				time=time+31; 
				break;
			}
			else{
				time=v[index]+4;  //�@�ӤH5min 
			}
		}
		index+=1;
	}
	if(index==0){
		cout<<30<<endl;
	}
	else if(index==n){
		cout<<time+31<<endl;
	}
	else{
		cout<<time<<endl;
	}
}
