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
	int n,r,d,i;
	while(cin>>n>>d>>r,n||r||d){
		int ara[n],ara1[n],cnt=0;
		for(i=0;i<n;i++){
			cin>>ara[i];
		}
		for(i=0;i<n;i++){
			cin>>ara1[i];
		}
		sort(ara,ara+n);
		sort(ara1,ara1+n,greater<int>());
		for(i=0;i<n;i++){
			if(ara[i]+ara1[i]>d){
				cnt+=((ara[i]+ara1[i])-d)*r;
			}
		}
		cout<<cnt<<"\n";
	}
	return 0;
} 
