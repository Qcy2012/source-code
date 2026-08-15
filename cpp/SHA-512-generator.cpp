#include<bits/stdc++.h>
using namespace std;
string s="";
int main(){
	srand(time(nullptr));
	for(int i=1;i<=512;i++){
		int tmp=1+rand()%62;
		if(tmp>=1&&tmp<=10){
			s+=char(tmp+47);
		}else if(tmp>=11&&tmp<=36){
			s+=char(tmp+54);
		}else{
			s+=char(tmp+60);
		}
	}
	cout << s << "\n";
	system("pause");
	return 0;
}
