#include <bits/stdc++.h>
using namespace std;
int main(){
	//int fib[40];
	long long int fib[50];  //>40�n��long long �|�z�� 
	int n,input;
	fib[0]=1;
	fib[1]=2;
	for(int i=2;i<50;i++){  //��O��ƦC�s�}�C 
		fib[i]=fib[i-1]+fib[i-2];
	}
	cin>>n;  //n������ 
	while(n--){
		cin>>input;  //���� 
		cout<<input<<" = ";
		
		int index=0;
		for(int i=48;i>=0;i--){  //��J��O������ 
			if(input-fib[i]>=0){  //�۴�O�����N��X1 
				cout<<"1";
				input-=fib[i]; 
				index=1;
			}
			else if(index==1){
				cout<<"0";
			}
		}
		cout<<" (fib)"<<endl;
	}
}
