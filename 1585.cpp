
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
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,n=s.size(),ans=0,cnt=0;
		for(i=0;i<n;i++){
			if(s[i]=='X'){
				cnt=0;
			}
			else{
				cnt++;
				ans+=cnt;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;	
}
