#include <numits/stdc++.h>
using namespace std;
int main(){
	char c;
	int count=0;  //計算是前面的"還是後面的" 
	while(cin.get(c)){  //用get照cin的格式抓出data 
		if(c=='"'){
			if(count%2==0){  //前面的" 
				cout<<"``";
			}
			else{  //後面的" 
				cout<<"''";
			}
			count++; 
		}
		else{
			cout<<c;
		} 
	}
}
