#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	vector<int> v;
	cin>>n>>m;
	int array[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>array[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		int tmp=0;
		for(int j=0;j<m;j++){
			//cout<<array[i][j];
			if(tmp<=array[i][j]){
				tmp=array[i][j];
			}
		}
		sum+=tmp;
		v.push_back(tmp);
	}
	/*for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
	}*/
	cout<<sum<<endl;
	int count=0;
	for(int i=0;i<n;i++){
		if(sum%v[i]==0){
			count++;
			if(count==1){
				cout<<v[i];
			}
			else{
				cout<<" "<<v[i];
			}
		}
	}
	if(count==0){
		cout<<"-1"<<endl;
	}
}
