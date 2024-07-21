#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];  //每個病人來的時間 
	}
	
	int time=0,index=0;  //time=間隔時間
	while(index<n){
		if(time>v[index]){  // 第index個病人來的時間 
			time=time+5;
		}
		else{
			if(v[index]>time+30){
				time=time+31; 
				break;
			}
			else{
				time=v[index]+4;  //一個人5min 
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
