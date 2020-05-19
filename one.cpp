#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,an=10;cin>>n;
	while(n){
		an+=9;
		int sm=0,ana=an;
		while(ana){
			sm+=(ana%10);
			ana/=10;}
		if(sm==10) n--;
	}
	cout<<an;
	
	
	
return 0;
}
