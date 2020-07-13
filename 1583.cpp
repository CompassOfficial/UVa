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
int digsum(int n){
	int ret=0;
	while(n){
		ret+=n%10;
		n/=10;
	}
	return ret;
}
int main() 
{ 
	turbo();
	int t,n,i;
	map<int ,int> mp;
	for(i=1;i<=100000;i++){
		int tem=i+digsum(i);
		if(mp[tem]==0){
			mp[tem]=i;
		}
	}
	cin>>t;
	while(t--){
		int a=1;
		cin>>n;
		cout<<mp[n]<<"\n";
	}
	return 0;	
}
