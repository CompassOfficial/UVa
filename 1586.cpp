
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
		int i,n=s.size(),c=0,ni=0,h=0,o=0;
		double ans=0;
		for(i=0;i<n;i++){
			if(s[i]=='C'||s[i]=='N'||s[i]=='O'||s[i]=='H'){
				int tem=0;
				if(i<n-2&&(s[i+1]>=48&&s[i+1]<=57)&&(s[i+2]>=48&&s[i+2]<=57)){
					tem+=((s[i+1]-'0')*10+(s[i+2]-'0'));
				}
				else if(i<n-1&&(s[i+1]>=48&&s[i+1]<=57)){
					tem+=(s[i+1]-'0');
				}
				else{
					tem++;
				}
				if(s[i]=='C'){
					c+=tem;
				}
				else if(s[i]=='N'){
					ni+=tem;
				}
				else if(s[i]=='H'){
					h+=tem;
				}
				else{
					o+=tem;
				}
			}
		}
		ans+=(12.01*c)+(h*1.008)+(o*16.00)+(ni*14.01);
		cout<<fixed<<setprecision(3)<<ans<<"\n";
	}
	return 0;	
}
