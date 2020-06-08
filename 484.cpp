  /*  HARD WORK FOREVER PAYS  */
#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
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
	map<int,int> mp;
	vector<int> v;
	int a;
	while(scanf("%d",&a)!=EOF){
		mp[a]++;
		if(mp[a]==1){
			v.pb(a);

		}
	}
	for(auto u:v){
		cout<<u<<" "<<mp[u]<<"\n";
	}
    return 0; 
} 
