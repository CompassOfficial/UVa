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
	char c;
	string s;
	while(t--){
		cin>>s;
		string s1="";
		int n=s.size(),i,j;
		for(i=0;i<n;i++){
			s1+=s[i];
			int m=n/(i+1);
			string s2="";
			for(j=1;j<=m;j++){
				s2+=s1;
			}
			if(s2==s){
				if(t==0){
					cout<<i+1<<"\n";
					break;
				}
				cout<<i+1<<"\n\n";
				break;
			}
		}
	}
	return 0;	
}
