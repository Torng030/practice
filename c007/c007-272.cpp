#include <numits/stdc++.h>
using namespace std;
int main(){
	char c;
	int count=0;  //�p��O�e����"�٬O�᭱��" 
	while(cin.get(c)){  //��get��cin���榡��Xdata 
		if(c=='"'){
			if(count%2==0){  //�e����" 
				cout<<"``";
			}
			else{  //�᭱��" 
				cout<<"''";
			}
			count++; 
		}
		else{
			cout<<c;
		} 
	}
}
