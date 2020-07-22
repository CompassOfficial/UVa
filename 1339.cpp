#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define f first
#define s second
#define turbo(){	\
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL); \
}
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
int main() 
{ 
	turbo();
	int n,m,cs=1;
	string s1,s2;
	while(cin>>s1){
		cin>>s2;
		int i=0,cnt1=0,cnt2=0,n=s1.size();
		map<char,int> mp,mp2;
		for(i=0;i<n;i++){
			mp[s1[i]]++;
		}
		for(i=0;i<n;i++){
			mp2[s2[i]]++;
		}
		for(auto &u:mp){
			cnt1++;
			for(auto &v:mp2){
				if(u.s==v.s){
					v.s=0;
					cnt2++;
					break;
				}
			}
		}
		if(cnt2==cnt1){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	return 0; 
} 
