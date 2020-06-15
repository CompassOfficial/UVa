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
	int n;
	while(cin>>n){
		int mul=1,i=n+1,j=1;
		vector<PII> v;
		while((i*n)/j>=i){
			if((i*n)%j==0){
				v.push_back(mk((i*n)/j,i));
			}
			i++;
			j++;
		}
		sort(v.rbegin(),v.rend());
		cout<<v.size()<<"\n";
		for(i=0;i<v.size();i++){
			cout<<1<<"/"<<n<<" = "<<1<<"/"<<v[i].f<<" + "<<1<<"/"<<v[i].s<<"\n";
		}
	}
	return 0;
}
