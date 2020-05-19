#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void sol(){
	string s;cin>>s;ll n=s.size(),tw=2;
	ll a=0;
	while(n--&&tw){
		ll mx=0,ps=-1;
		for(ll u=a+1;u<s.size();u++){
			stringstream str;str<<s[u];
			ll k;str>>k;
			mx=max(mx,k);
			if(mx==k) ps=u;
			}
		stringstream stdr;stdr<<s[a];
			ll ka;stdr>>ka;
		if(mx>ka){ swap(s[a],s[ps]);tw--;}
		
	a++;}
    cout<<s<<"\n";
}
int main(){
	int t;cin>>t;
	while(t--) sol();
return 0;
}
