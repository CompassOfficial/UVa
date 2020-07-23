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
typedef pair<ll,pair<ll,ll>> PII;
int main() 
{ 
	turbo();
	string s1,s2;
	while(cin>>s1>>s2){
		int sz1=s1.size(),sz2=s2.size(),i,j,l,ans=sz1+sz2;
		if(sz1<sz2){
			swap(s1,s2);
			swap(sz1,sz2);
		}
		for(i = sz1 - 1 ; i >= 0 ; i--){
			l = i;
			int cnt = 0;
			bool possible = 1;
			for(j = sz2 - 1 ; min(j,l) >= 0 ; j--, l--){
				if(s1[l] == '2' && s2[j] == '2'){
					possible = 0;
				}
				cnt++;
			}
			if(possible){
				ans=min(ans,sz1+sz2-cnt);
			}
		}

		for(i = 0 ; i < sz1 ; i++){
			l = i;
			int cnt = 0;
			bool possible = 1;
			for(j = 0 ; j < sz2 && l < sz1; j++, l++){
				if(s1[l] == '2' && s2[j] == '2'){
					possible = 0;
				}
				cnt++;
			}
			if(possible){
				ans = min(ans,sz1 + sz2 - cnt); 
			}
		}
		cout<<ans<<"\n";
	}
	return 0; 
} 
