#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll a,b,n=0;cin>>a>>b;
	while(1){
		if(a==0||b==0) break;
		n++;
		if(a>b)a-=2;b++;
		else b-=2;a++;}
	cout<<n;
return 0;
}
