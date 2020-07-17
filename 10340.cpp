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
	string s1,s2;
	while(cin>>s1>>s2){
		int n1=s1.size(),n2=s2.size(),i,j=0,cnt=0;
		for(i=0;i<n1;i++){
			for(;j<n2;j++){
				if(s1[i]==s2[j]){
					cnt++;
					j++;
					break;
				}
			}
		}
		if(cnt==n1){
			cout<<"Yes"<<"\n";
		}
		else{
			cout<<"No"<<"\n";
		}
	}
	return 0;	
}
