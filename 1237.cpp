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
typedef pair<string,pair<int,int>> PII;
int main()
{
	int t;
	cin>>t;
	while(t--){
		vector<PII> v;
		string s;
		int q,n,i,j,x,y,cnt=0;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>s>>x>>y;
			v.pb({s,{x,y}});
		}
		cin>>q;
		while(q--){
			cin>>x;
			cnt=0;
			for(i=0;i<n;i++){
				if(x<=v[i].s.s&&x>=v[i].s.f){
					cnt++;
					s=v[i].f;
				}
			}
			if(cnt>=2||cnt==0){
				cout<<"UNDETERMINED"<<"\n";
			}
			else{
				cout<<s<<"\n";
			}
		}
		if(t>=1){
			cout<<"\n";
		}
	}
	return 0;
}
