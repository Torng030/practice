#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a[40];
	a[0]=1;
	a[1]=2;
	for(int i=2;i<40;i++){  //�إ߶O�i���Y�ư}�C 
		a[i]=a[i-1]+a[i-2]; //�W�h:�ƭ�=�e�ⶵ���Ȭۥ[  
	}
	int n;
	cin>>n;  //n������ 
	for(int j=0;j<n;j++){
		int num,index=0;
		cin>>num;
		cout<<num<<" = "; 
		for(int k=39;k>=0;k--){  //�q�̫᭱���ȶ}�l��� 
			if(num>=a[k]){
				num-=a[k];  //num>�Ȥ~�i�H�۴�
				cout<<"1";
				index++;
			}
			else{
				if(index!=0){  //�p�G��X�L1�� �L�k�۴�N�n��X0 
					cout<<"0";
				}
				else{
					continue;
				}
			}
		}
		cout<<" (fib)"<<endl;
	}
} 
