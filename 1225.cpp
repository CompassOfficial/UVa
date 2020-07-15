
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
int ara[10];
void dig(int n){
	while(n!=0){
		ara[n%10]++;
		n/=10;
	}
}
int main() 
{ 
	turbo();
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		memset(ara,0,sizeof(ara));
		for(i=1;i<=n;i++){
			dig(i);
		}
		for(i=0;i<=8;i++){
			cout<<ara[i]<<" ";
		}
		cout<<ara[9];
		cout<<"\n";
	}
	return 0;	
}
